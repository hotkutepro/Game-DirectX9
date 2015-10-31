#include "GameSound.h"

GameSound* GameSound::m_hInstance = nullptr;

GameSound::GameSound()
{

}

GameSound::~GameSound()
{
	// Giai phong bo nho
}

void GameSound::Initialize(HWND windowsHandler)
{
	FrkSound::InitializeSoundClass(windowsHandler);
}

//void GameSound::Play(const pchar* audioPath, bool isLoop = false, DWORD priority = 0)
//{
//	FrkSound::Play(audioPath);
//}

