#include <Windows.h>
#include "FrkGame.h"

int WINAPI WinMain(HINSTANCE h, HINSTANCE p, LPTSTR a, int c)
{

	MSG msg;
	FrkGame game(h, 600, 480, "DirectX - Start");
	if (!game.InitWindow())
	{
		MessageBox(NULL, "Can't init game", "Error", MB_OK);
		return 0;
	}
	// cac bien dung de tinh toan gametime
	LARGE_INTEGER currentTime;
	LARGE_INTEGER frequence;
	float cntPerSecond = 0;
	float gameTime = 0;
	LARGE_INTEGER preTime;
	float delay = 0;
	ZeroMemory(&msg, sizeof(msg));
	QueryPerformanceFrequency(&frequence);
	cntPerSecond = 100.0f / (float)frequence.QuadPart;
	QueryPerformanceCounter(&preTime);

	while (msg.message != WM_QUIT)
	{
		if (PeekMessage(&msg, NULL, NULL, NULL, PM_REMOVE))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
		else
		{

			QueryPerformanceCounter(&currentTime);
			delay += gameTime;
			if (delay > gameTime * 3)
			{

				game.Update(delay);
				game.Render();
				delay = 0;
			}
			QueryPerformanceCounter(&preTime);
			gameTime = ((float)preTime.QuadPart - (float)currentTime.QuadPart) * cntPerSecond;

		}
	}
	return 0;
}