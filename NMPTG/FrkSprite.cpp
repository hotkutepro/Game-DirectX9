#include "FrkSprite.h"


FrkSprite::FrkSprite()
{
}
FrkSprite::FrkSprite(LPDIRECT3DTEXTURE9 img, int width, int height, int count, int spriteperrow)
{
	this->_Img = img;
	this->_Count = count;
	this->_Height = height;
	this->_Width = width;
	this->_SpriteperRow = spriteperrow;
	this->_Rect.left = 0;
	this->_Rect.right = this->_Width;
	this->_Rect.top = 0;
	this->_Rect.bottom = this->_Height;
	this->_position.x = 100;
	this->_position.y = 100;
	this->_Index = 0;
}
void FrkSprite::Next()
{
	_Index = (_Index + 1) % _Count;
}
void FrkSprite::Reset()
{
	_Index = 0;
}

FrkSprite::~FrkSprite()
{
}
