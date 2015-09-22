#pragma once
#include <d3dx9.h>
#include <string>
using namespace std;
class FrkContent
{
	//thiet bi ve lay tu lop graphic
	LPDIRECT3DDEVICE9 d3ddv;
public:
	// load 1 texture
	LPDIRECT3DTEXTURE9 LoadTexture(string path);
	//load 1 sufface
	LPDIRECT3DSURFACE9 LoadSurface(string path);
	FrkContent(LPDIRECT3DDEVICE9);
	~FrkContent(void);
	
};

