#pragma once
#include<d3dx9.h>
class FrkSprite
{
public:
public:
	int _Index;
	int _Width;
	int _Height;
	int _Count;
	int _SpriteperRow;
	RECT _Rect;
	LPDIRECT3DTEXTURE9 _Img;
	D3DXVECTOR2 _position;	
	void Next();
	void Reset();
	FrkSprite(LPDIRECT3DTEXTURE9 img, int width, int height, int count, int spriteperrow);
	void update();
	FrkSprite();
	~FrkSprite();
};

