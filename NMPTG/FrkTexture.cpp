#include "FrkTexture.h"

FrkTexture::FrkTexture()
{
	m_width = 0;
	m_height = 0;
}

FrkTexture::FrkTexture(int width, int height)
{
	SetHeight(height);
	SetWidth(width);
}

FrkTexture::FrkTexture(FrkTexture& texture)
{
	SetHeight(texture.m_height);
	SetWidth(texture.m_width);
}

void FrkTexture::SetHeight(int height)
{
	m_height = height;
}

void FrkTexture::SetWidth(int width)
{
	m_width = width;
}

int FrkTexture::GetHeight()
{
	return m_height;
}

int FrkTexture::GetWidth()
{
	return m_width;
}

void FrkTexture::SetTexture(FrkTexture texture)
{
	SetHeight(texture.GetHeight());
	SetWidth(texture.GetWidth());
}

FrkTexture FrkTexture::GetTexture()
{
	return FrkTexture(m_width, m_height);
}