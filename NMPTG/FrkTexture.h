#ifndef __FRKTEXTURE_H__
#define __FRKTEXTURE_H__

#include <d3d9.h>
#include <d3dx9.h>
#include <sstream>
#include <vector>
#include <exception>
#include <time.h>

using namespace std;

class FrkTexture
{
private:
	LPDIRECT3DTEXTURE9 lpDirect3DTexture;
public:
	int width;
	int height;

	FrkTexture();
	~FrkTexture();
	void LoadTextureFromFile(LPDIRECT3DDEVICE9 lpDirectDevice, LPCSTR fileName, D3DCOLOR colorKey = 0xffffffff);
	void RenderTexture(LPD3DXSPRITES lpDSpriteHandle, D3DVECTOR2 position, D3DVECTOR2 scale, float angle, RECT *srcRect, float deep, D3DCOLOR color = 0xffffffff);
};

#endif