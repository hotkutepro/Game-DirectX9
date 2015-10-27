#include "FrkText.h"

D3DXMATRIX FrkText::m_hCameraConvertMatrix;

// thiet lap cac thuoc tinh co ban nhu ten font, kich thuoc, thiet bi de ve
FrkText::FrkText(LPDIRECT3DDEVICE9 d3dDevice, LPD3DXSPRITE& spriteHandler)
{
	m_hD3dDevice = d3dDevice;
	m_hFontFace = DEFAULT_FONTFACE; // Kiểu font
	m_hFontSize = DEFAULT_FONTSIZE;
	m_hSpriteHandler = spriteHandler;
	// Dung de chuyen sang ma tran dong nhat
	D3DXMatrixIdentity(&m_hCameraConvertMatrix);
	// FR_PRIVATE # public
	AddFontResourceEx(DEFAULT_FONTPATH, FR_PRIVATE, 0);

	InitializeFont();
}

// Khoi tao bo font voi cac thuoc tinh da co
void FrkText::InitializeFont()
{
	// cac bien
	D3DXCreateFont(
		m_hD3dDevice,
		m_hFontSize,
		0, 400, 0, false,
		DEFAULT_CHARSET,
		OUT_TT_PRECIS,
		CLIP_DEFAULT_PRECIS,
		DEFAULT_PITCH,
		m_hFontFace,
		&m_hFont);
}

void FrkText::SetFontSize(int newSize)
{
	m_hFont->Release();
	m_hFontSize = newSize;
	InitializeFont();
}

FrkText::~FrkText(void)
{
	m_hFont->Release();
	RemoveFontResource(DEFAULT_FONTPATH);
}

void FrkText::SetPositionConvertMatrix(const D3DXMATRIX& newMatrix)
{
	FrkText::m_hCameraConvertMatrix = newMatrix;
}