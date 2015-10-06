#pragma once
#include <d3d9.h>
#include <d3dx9.h>
#include "FrkGame.h"
class FrkGraphic
{
private:
	
	////doi tuong direct x
	//LPDIRECT3D9 d3d;
	////thiet bi ve
	//LPDIRECT3DDEVICE9 d3ddev;
	FrkGame* m_hGame;
	//Ve texture
	LPD3DXSPRITE m_hD3DXSprite;
	
public:
	//Cai dat thiet bi ve
	bool InitD3DDevice();
	//Constructor
	//FrkGraphic(HWND, int, int);
	FrkGraphic(FrkGame* hGame);
	//Destructor
	~FrkGraphic(void);
	//bat dau ve
	void Begin();
	//Ket thuc ve
	void End();
	//Ve texture
	void DrawTexture(LPDIRECT3DTEXTURE9 texture, D3DXVECTOR2 postion, D3DCOLOR color);
	void DrawTexture(LPDIRECT3DTEXTURE9 texture, RECT source, D3DXVECTOR2 postion, D3DCOLOR color);

	//Ve surface
	void DrawSurface(LPDIRECT3DSURFACE9 surface, RECT rect, int x, int y);	
};