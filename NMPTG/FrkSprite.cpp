#include "FrkSprite.h"


FrkSprite::FrkSprite()
{
}
void FrkSprite::Next()
{
	_Index = (_Index + 1) % _Count;
}
void FrkSprite::Reset()
{
	_Index = 0;
}
void FrkSprite::Set(int index){
	this->_Index = index;
}
FrkSprite::FrkSprite(FrkSprite* sprite)
{
	this->_Count = sprite->_Count;
	this->_Height = sprite->_Height;
	this->_Width = sprite->_Width;
	this->_Image = sprite->_Image;
	this->_SpriteperRow = sprite->_SpriteperRow;
}
FrkSprite::FrkSprite(FrkTexture* img, int width, int height, int count, int spriteperrow)
{
	this->_Image = img;
	this->_Count = count;
	this->_Height = height;
	this->_Width = width;
	this->_SpriteperRow = spriteperrow;
	this->_Index = 0;
}
FrkSprite::~FrkSprite()
{
}
