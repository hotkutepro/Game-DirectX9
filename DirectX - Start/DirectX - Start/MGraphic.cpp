#include "MGraphic.h"
MGraphic::MGraphic(HWND hwnd, int W, int H)
{
	this->hWnd = hwnd;
	this->Width = W;
	this->Height = H;
	this->d3d = NULL;
	this->d3ddev = NULL;
	this->d3dxSprite = NULL;
}

bool MGraphic::InitD3D()
{
	//tao mot doi tuong Direct3D
	this->d3d = Direct3DCreate9(D3D_SDK_VERSION);
	if (!this->d3d)
		return false;
	//tao thiet bi ve
	D3DPRESENT_PARAMETERS d3dpp;
	ZeroMemory(&d3dpp, sizeof(d3dpp));
	d3dpp.BackBufferCount = 1;// 1 backbuffer
	d3dpp.BackBufferFormat = D3DFMT_UNKNOWN;//auto format
	d3dpp.BackBufferWidth = this->Width;
	d3dpp.BackBufferHeight = this->Height;
	d3dpp.hDeviceWindow = this->hWnd;// Handle cua so ve~
	d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;// tham so hay dung
	d3dpp.Windowed = true;// che do co cua so
	HRESULT hr = this->d3d->CreateDevice(D3DADAPTER_DEFAULT,//chon thiet bi ve mac dinh
		D3DDEVTYPE_HAL,//su dung ho tro phan cung
		this->hWnd,// Cua so ve
		D3DCREATE_SOFTWARE_VERTEXPROCESSING,
		&d3dpp,// thong so cho back buffer
		&this->d3ddev//con tro nhan du lieu sau khi tao device
		);

	if (FAILED(hr))
	{
		return false;
	}
	
		hr = D3DXCreateSprite(this->d3ddev, &this->d3dxSprite);
	if (FAILED(hr))
		return false;
	return true;
}

MGraphic::~MGraphic(void)
{
}

void MGraphic::Begin()
{
	// xóa c?a s? v? b?ng màu tr?ng D3DCOLOR_XRGB(255,255,255)
	this->d3ddev->Clear(1, NULL, D3DCLEAR_TARGET, D3DCOLOR_XRGB(255, 255, 255), 1, NULL);
	// bat dau ve
	this->d3ddev->BeginScene();
	this->d3dxSprite->Begin(D3DXSPRITE_ALPHABLEND);
}
void MGraphic::End()
{
	// ket thuc ve
	this->d3dxSprite->End();
	this->d3ddev->EndScene();
	// the hien cac doi tuong 
	this->d3ddev->Present(NULL, NULL, NULL, NULL);
}
void MGraphic::DrawTexture(LPDIRECT3DTEXTURE9 texture, D3DXVECTOR2 postion, D3DCOLOR color)
{
	this->d3dxSprite->Draw(
		texture,//hinh can ve
		NULL,//khung cat tu hinh
		NULL,//tam cua texture
		&D3DXVECTOR3(postion.x, postion.y, 0),//toa do texture tren man hinh
		color
		);
}