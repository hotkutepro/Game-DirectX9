#pragma once
#include<d3dx9.h>
#include"FrkTexture.h"
class FrkSprite
{
public:
public:
	int _Index;
	int _Width;
	int _Height;
	int _Count;//số sprite trong một texture 
	int _SpriteperRow;
	FrkTexture* _Image;

	void Next();
	void Reset();
	void set(int index);		
	FrkSprite(FrkSprite* sprite);
	FrkSprite(FrkTexture* img, int width, int height, int count, int spriteperrow);
	FrkSprite();
	~FrkSprite();
};

