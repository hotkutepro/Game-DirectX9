#ifndef __SOUND_H__
#define __SOUND_H__

#include <dsound.h>
#include <vector>
#include <memory>

#include "DSutil.h"

#define AUDIO_FORMAT_TAG	 WAVE_FORMAT_ADPCM
#define AUDIO_NUM_OF_CHANNEL	 2
#define AUDIO_SAMPLE_SPEED	 22050
#define AUDIO_BITS_PER_SAMPLE	 16
#define AUDIO_FLAGS	 0
#define AUDIO_BUFFER_SIZE	640000
#define AUDIO_GUID	GUID_NULL

#define AUDIO_BLOCK_ALIGN(bitPerSample, nChannels)	(WORD)(bitPerSample / 8 * nChannels)
#define AUDIO_AVERAGE_BPS(samplesPerSec, blockAlign)	(DWORD)(samplesPerSec * blockAlign)


class FrkSound
{
public:
	FrkSound(const wchar_t* audioPath);
	~FrkSound(void);

	static HRESULT InitializeSoundClass(HWND windowsHandler);
	static HRESULT ReleaseSoundClass();

	HRESULT Play(bool isLoop = false, DWORD priority = 0);
	HRESULT Stop();
private:
	HRESULT LoadAudio(const wchar_t* audioPath);
private:
	static WAVEFORMATEX m_hBufferFormat;
	static DSBUFFERDESC m_hBufferDescription;
	static LPDIRECTSOUND8 m_hAudioHandler;
	static HWND m_hWindowsHandler;

	LPDIRECTSOUNDBUFFER m_hSoundBuffer;
};

#endif