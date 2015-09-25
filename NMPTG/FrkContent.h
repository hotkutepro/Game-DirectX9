#pragma once
#include <d3dx9.h>
#include <string>
#include "FrkGame.h"
using namespace std;
class FrkContent
{
protected:
	FrkGame* m_hGame;
public:
	// load 1 texture
	LPDIRECT3DTEXTURE9 LoadTexture(string path);
	//load 1 sufface
	LPDIRECT3DSURFACE9 LoadSurface(string path);
	FrkContent(FrkGame*);
	~FrkContent(void);
	
};

