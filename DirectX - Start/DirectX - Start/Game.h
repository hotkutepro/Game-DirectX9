#pragma once
#include <Windows.h>
class Game
{
private:
	//hinstance cua chuong trinh
	HINSTANCE hInstance;
	//hwnd cua cua so
	HWND hWnd;
	// kich thuong cua so
	int Width;
	int Height;
	//ten cua so
	char windowName[256];
	//Thao tac xu ly cua so
	static HRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

public:
	//thiet lap gia tri cho cua so
	bool InitWindow();
	//load data game
	void InitData();
	//update sau khoang thoi gian gameTime
	void Update(float gameTime);
	//draw
	void Render();
	// Constructor
	Game(HINSTANCE hIns, int W, int H, char* name);
	~Game(void);
};

