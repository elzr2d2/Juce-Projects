#pragma once

#include "JuceHeader.h"

namespace te = tracktion_engine;

//==============================================================================
namespace Helpers
{
	static inline void addAndMakeVisible(Component& parent, const Array<Component*>& children)
	{
		for (auto c : children)
			parent.addAndMakeVisible(c);
	}

	static inline String getStringOrDefault(const String& stringToTest, const String& stringToReturnIfEmpty)
	{
		return stringToTest.isEmpty() ? stringToReturnIfEmpty : stringToTest;
	}
}

//==============================================================================
namespace EngineHelpers
{
te::Project::Ptr createTempProject(te::Engine& engine);

void showAudioDeviceSettings(te::Engine& engine);

void browseForAudioFile(te::Engine& engine, std::function<void(const File&)> fileChosenCallback);

void removeAllClips(te::AudioTrack& track);

te::WaveAudioClip::Ptr loadAudioFileAsClip(te::Edit& edit, const File& file);

	template<typename ClipType>
	typename ClipType::Ptr loopAroundClip(ClipType& clip)
	{
		auto& transport = clip.edit.getTransport();
		transport.setLoopRange(clip.getEditTimeRange());
		transport.looping = true;
		transport.position = 0.0;
		transport.play(false);

		return clip;
	}

void togglePlay(te::Edit& edit);
}


//==============================================================================
struct Thumbnail : public Component
{
	Thumbnail(te::TransportControl& tc)
		: transport(tc)
	{
		cursorUpdater.setCallback([this]
		{
			updateCursorPosition();

			if (smartThumbnail.isGeneratingProxy() || smartThumbnail.isOutOfDate())
				repaint();
		});
		cursor.setFill(findColour(Label::textColourId));
		addAndMakeVisible(cursor);
	}

	void setFile(const te::AudioFile& file)
	{
		smartThumbnail.setNewFile(file);
		cursorUpdater.startTimerHz(25);
		repaint();
	}

	void paint(Graphics& g) override
	{
		auto r = getLocalBounds();
		const auto colour = findColour(Label::textColourId);

		if (smartThumbnail.isGeneratingProxy())
		{
			g.setColour(colour.withMultipliedBrightness(0.9f));
			g.drawText("Creating proxy: " + String(roundToInt(smartThumbnail.getProxyProgress() * 100.0f)) + "%",
				r, Justification::centred);

		}
		else
		{
			const float brightness = smartThumbnail.isOutOfDate() ? 0.4f : 0.66f;
			g.setColour(colour.withMultipliedBrightness(brightness));
			smartThumbnail.drawChannels(g, r, true, { 0.0, smartThumbnail.getTotalLength() }, 1.0f);
		}
	}

	void mouseDown(const MouseEvent& e) override
	{
		transport.setUserDragging(true);
		mouseDrag(e);
	}

	void mouseDrag(const MouseEvent& e) override
	{
		jassert(getWidth() > 0);
		const float proportion = e.position.x / getWidth();
		transport.position = proportion * transport.getLoopRange().getLength();
	}

	void mouseUp(const MouseEvent&) override
	{
		transport.setUserDragging(false);
	}

private:
	te::TransportControl& transport;
	te::SmartThumbnail smartThumbnail{ transport.engine, te::AudioFile(), *this, nullptr };
	DrawableRectangle cursor;
	te::LambdaTimer cursorUpdater;

	void updateCursorPosition()
	{
		const double loopLength = transport.getLoopRange().getLength();
		const double proportion = loopLength == 0.0 ? 0.0 : transport.getCurrentPosition() / loopLength;

		auto r = getLocalBounds().toFloat();
		const float x = r.getWidth() * float(proportion);
		cursor.setRectangle(r.withWidth(2.0f).withX(x));
	}
};

