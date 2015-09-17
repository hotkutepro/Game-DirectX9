#include "Game.h"


Game::Game(HINSTANCE hIns, int W, int H, char* name)
{
	this->hInstance = hIns;
	this->Width = W;
	this->Height = H;
	this->hWnd = NULL;
	strcpy(this->windowName, name);
}


Game::~Game(void)
{
}
//Ham xu ly cua so. Chi can quan tam den ?M_DESTROY
LRESULT CALLBACK Game::WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	if (message == WM_DESTROY)
	{
		PostQuitMessage(0);
	}
	return DefWindowProc(hWnd, message, wParam, lParam);
}
// Tao cua so game, cai dat cai doi tuong directX o day
bool Game::InitWindow()
{
	WNDCLASSEX wndclass;
	wndclass.cbSize = sizeof(WNDCLASSEX);
	wndclass.cbClsExtra = 0;
	wndclass.cbWndExtra = 0;
	wndclass.hIconSm = 0;
	wndclass.hIcon = 0;
	wndclass.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndclass.hInstance = this->hInstance;
	wndclass.lpfnWndProc = (WNDPROC)WndProc;
	wndclass.lpszClassName = "Game";
	wndclass.lpszMenuName = NULL;
	wndclass.style = CS_HREDRAW | CS_VREDRAW;

	if (!RegisterClassEx(&wndclass))
	{
		return false;
	}
	this->hWnd = CreateWindow(
		"Game",
		this->windowName,
		WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		this->Width,
		this->Height,
		NULL,
		NULL,
		this->hInstance,
		NULL);
	if (!this->hWnd)
		return false;
	ShowWindow(this->hWnd, SW_NORMAL);
	UpdateWindow(this->hWnd);
	return true;
}
//Init game data
void Game::InitData()
{
	//load data
}

void Game::Update(float gameTime)
{
}

void Game::Render()
{

}