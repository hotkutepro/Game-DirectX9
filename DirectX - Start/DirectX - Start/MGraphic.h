#pragma once
#include <d3d9.h>
#include <d3dx9.h>
class MGraphic
{
private:

	//doi tuong direct x
	LPDIRECT3D9 d3d;
	//thiet bi ve
	LPDIRECT3DDEVICE9 d3ddev;
	//Ve texture
	LPD3DXSPRITE d3dxSprite;
	//hwnd cua cua so ve
	HWND hWnd;
	//Kich thuoc cua bo de^.m
	int Width;
	int Height;
public:
	//Cai dat thiet bi ve
	bool InitD3D();
	//Constructor
	MGraphic(HWND, int, int);
	//Destructor
	~MGraphic(void);
	//bat dau ve
	void Begin();
	//Ket thuc ve
	void End();
	//Ve texture
	void DrawTexture(LPDIRECT3DTEXTURE9 texture, D3DXVECTOR2 postion, D3DCOLOR color);
	void DrawTexture(LPDIRECT3DTEXTURE9 texture, RECT source, D3DXVECTOR2 postion, D3DCOLOR color);
	
	//Ve surface
	void DrawSurface();
	//Lay thiet bi ve
	LPDIRECT3DDEVICE9 GetDevice();
};