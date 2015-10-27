#ifndef __SOUND_H__
#define __SOUND_H__

#pragma comment(lib, "dsound.lib")
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "dxguid.lib")

#include <dsound.h>
#include <vector>
#include <memory>

#include "dsutil.h"
#include "DefaultConstant.h"
#include "DefaultStructure.h"

class FrkSound
{
public:
	FrkSound(const pchar* audioPath);
	~FrkSound(void);

	static HRESULT InitializeSoundClass(HWND windowsHandler);
	static HRESULT ReleaseSoundClass();

	HRESULT Play(bool isLoop = false, DWORD priority = 0);
	HRESULT Stop();
private:
	HRESULT LoadAudio(const pchar* audioPath);
private:
	// Dinh dang của bộ đệm trong DS tùy theo âm thanh mà có đinh dạng khác nhau
	static WAVEFORMATEX m_hBufferFormat;
	// Cấu trúc miêu tả bộ đệm thứ cấp ngoài biết được định dạng bộ đêm cần biết vê kích thước của audio và bộ đệm sẽ chứa.
	static DSBUFFERDESC m_hBufferDescription;
	static HWND m_hWindowsHandler;
	// Bien luu tru thiet bi DS
	static LPDIRECTSOUND8 m_hAudioHandler;

	LPDIRECTSOUNDBUFFER m_hSoundBuffer;
};

#endif