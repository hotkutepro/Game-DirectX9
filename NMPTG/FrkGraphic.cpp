#include "FrkGraphic.h"

FrkGraphic::FrkGraphic(FrkGame* hGame)
{
	this->m_hGame = hGame;
}

bool FrkGraphic::InitD3DDevice()
{
	HRESULT hr;
	hr = D3DXCreateSprite(this->m_hGame->GetDevice(), &this->m_hD3DXSprite);
	if (FAILED(hr))
		return false;
	return true;
}

FrkGraphic::~FrkGraphic(void)
{
}

void FrkGraphic::Begin()
{
	// xóa c?a s? v? b?ng màu tr?ng D3DCOLOR_XRGB(255,255,255)
	this->m_hGame->GetDevice()->Clear(1, NULL, D3DCLEAR_TARGET, D3DCOLOR_XRGB(255, 255, 255), 1, NULL);
	// bat dau ve
	this->m_hGame->GetDevice()->BeginScene();
	this->m_hD3DXSprite->Begin(D3DXSPRITE_ALPHABLEND);
}
void FrkGraphic::End()
{
	// ket thuc ve
	this->m_hD3DXSprite->End();
	this->m_hGame->GetDevice()->EndScene();
	// the hien cac doi tuong 
	this->m_hGame->GetDevice()->Present(NULL, NULL, NULL, NULL);
}
void FrkGraphic::DrawTexture(LPDIRECT3DTEXTURE9 texture, D3DXVECTOR2 postion, D3DCOLOR color)
{
	this->m_hD3DXSprite->Draw(
		texture,//hinh can ve
		NULL,//khung cat tu hinh
		NULL,//tam cua texture
		&D3DXVECTOR3(postion.x, postion.y, 0),//toa do texture tren man hinh
		color
		);
}

void FrkGraphic::DrawTexture(LPDIRECT3DTEXTURE9 texture, RECT source, D3DXVECTOR2 postion, D3DCOLOR color)
{
	this->m_hD3DXSprite->Draw(
		texture,//hinh can ve
		&source,//khung cat tu hinh
		NULL,//tam cua texture
		&D3DXVECTOR3(postion.x, postion.y, 0),//toa do texture tren man hinh
		color
		);
}



void FrkGraphic::DrawSurface(LPDIRECT3DSURFACE9 surface, RECT rect, int x, int y)
{
	// xoa man hinh
	LPDIRECT3DSURFACE9 back_buffer;
	this->m_hGame->GetDevice()->GetBackBuffer(0, 0, D3DBACKBUFFER_TYPE_MONO, &back_buffer);
	this->m_hGame->GetDevice()->ColorFill(back_buffer, NULL, D3DCOLOR_XRGB(50, 50, 50));
	// random color
	int r = rand() % 255;
	int g = rand() % 255;
	int b = rand() % 255;
	//set position 
	rect.top = y;
	rect.bottom = rect.top + 100;
	rect.left = x;
	rect.right = rect.left + 100;
	this->m_hGame->GetDevice()->ColorFill(surface, &rect, D3DCOLOR_XRGB(r, g, b));
	//draw surface
	this->m_hGame->GetDevice()->StretchRect(surface, NULL, back_buffer, &rect, D3DTEXF_NONE);

}
