#pragma once
#include <Windows.h>
#include <d3d9.h>
class FrkGame
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
protected:
	//doi tuong direct x
	LPDIRECT3D9 d3d;
	//thiet bi ve
	LPDIRECT3DDEVICE9 d3ddev;

public:
	bool InitDX();
	//thiet lap gia tri cho cua so
	bool InitWindow();
	//load data game
	void InitData();
	//update sau khoang thoi gian gameTime
	void Update(float gameTime);
	//draw
	void Render();
	// Constructor
	FrkGame(HINSTANCE hIns, int W, int H, char* name);
	FrkGame(FrkGame* game);
	~FrkGame(void);
	
};

