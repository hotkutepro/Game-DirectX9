#ifndef __GAMESOUND_H__
#define __GAMESOUND_H__

#include "FrkSound.h"

class GameSound
{
public:
	static void Initialize(HWND windowsHandler);
	static void Release();
	//static void Play(const pchar* audioPath, bool isLoop = false, DWORD priority = 0);
	//static void Play(pstring soundLink, bool repeat = false, bool playFromStart = true);
	static void stop();
	//static void stop(pstring soundLink);
private:
	GameSound();
	~GameSound();
	static GameSound* Get();
private:
	static GameSound* m_hInstance;

};

#endif