#ifndef __TEXT_H__
#define __TEXT_H__

#include <d3dx9.h>
#include <string>
#include <iostream>
#include <Windows.h>

#include "DefaultConstant.h"
#include "DefaultMethods.h"

class FrkText
{
public:
	FrkText(LPDIRECT3DDEVICE9 d3dDevice, LPD3DXSPRITE& spriteHandler);
	~FrkText(void);

	static void SetPositionConvertMatrix(const D3DXMATRIX& newMatrix);
	// chuyen content sang string
	template <class P>
	// ve len man hinh, chuyen tu vi tri
	// DT = Dock to, gan text vao sat textbox
	// vẽ chữ theo vị trí thay đổi
	void DrawText(const P& content, D3DXVECTOR3 position, D3DCOLOR color = DEFAULT_FONT_COLOR,
		int size = DEFAULT_FONTSIZE, UINT DT_Type = DT_LEFT, bool converted = true)
	{
		// kiem tra va gan Fontsize moi
		if (size != m_hFontSize)
			SetFontSize(size);
		// truyen vi tri text
		D3DXVECTOR3 pos(position);
		// chuyen vị trí theo ma trận cammera
		if (converted) {
			D3DXVec3TransformCoord(&pos, &pos, &cameraConvertMatrix_);
		}
		RECT drawField;

		drawField = { pos.x, pos.y, 0, 0 };
		
		m_hFont->DrawText(m_hSpriteHandler, Default::tostr(content).c_str(),
			-1, &drawField, DT_CALCRECT, color);
		// Tính toán lại vị trí của textbox, hiện tại là di chuyển từ phải sang trái
		if (DT_Type == DT_CENTER)
		{
			LONG w = drawField.right - drawField.left;
			drawField.left -= (LONG)(w / 2.0F);
			drawField.right -= (LONG)(w / 2.0F);
		}
		else if (DT_Type == DT_RIGHT)
		{
			LONG w = drawField.right - drawField.left;
			drawField.left -= w;
			drawField.right -= w;
		}

		m_hFont->DrawText(m_hSpriteHandler, DEFAULT::tostr(content).c_str(),
			-1, &drawField, DT_Type, color);
	}

	// ve ra man hinh, chuyen tu draw field.
	template <class P>
	void DrawText(const P& content, RECT* drawField, D3DCOLOR color = DEFAULT_FONT_COLOR,
		int size = DEFAULT_FONTSIZE, UINT DT_Type = DT_LEFT)
	{
		if (size != m_hFontSize)
			SetFontSize(size);
		m_hFont->DrawText(*m_hSpriteHandler, tostr(content), -1, drawField, DT_Type, color);
	}
private:
	void SetFontSize(int newSize);
	void InitializeFont();
private:
	LPD3DXSPRITE m_hSpriteHandler;
	static D3DXMATRIX m_hCameraConvertMatrix;
	LPDIRECT3DDEVICE9 m_hD3dDevice;
	LPD3DXFONT m_hFont;
	LPCTSTR m_hFontFace;
	int m_hFontSize;
};

#endif