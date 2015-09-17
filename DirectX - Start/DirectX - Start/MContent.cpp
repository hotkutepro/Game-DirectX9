#include "MContent.h"
MContent::MContent(LPDIRECT3DDEVICE9 device)
{
	this->d3ddv = device;
}

LPDIRECT3DTEXTURE9 MContent::LoadTexture(string path)
{
	LPDIRECT3DTEXTURE9 texture = NULL;
	D3DXIMAGE_INFO info;
	HRESULT hr;
	ZeroMemory(&info, sizeof(info));
	//l?y thông tin v? hình ?nh
	hr = D3DXGetImageInfoFromFile(path.c_str(), &info);
	if (hr != D3D_OK)
		return NULL;
	//t?o texture
	hr = D3DXCreateTextureFromFileEx(this->d3ddv,
		path.c_str(),
		info.Width,
		info.Height,
		1,
		D3DUSAGE_DYNAMIC,
		D3DFMT_UNKNOWN,// t? ??ng ch?n format phù h?p
		D3DPOOL_DEFAULT, //Ch?n b? nh? ?? l?u t? ??ng
		D3DX_DEFAULT,//Ch?n tham s? m?c ??nh
		D3DX_DEFAULT,//Ch?n tham s? m?c ??nh
		D3DCOLOR_XRGB(255, 255, 255),
		&info,//thông tin hình ?nh
		NULL,
		&texture);

	if (hr != D3D_OK)
		return 0;
	return texture;
}

LPDIRECT3DSURFACE9 MContent::LoadSurface(string path)
{
	LPDIRECT3DSURFACE9 surface = NULL;
	D3DXIMAGE_INFO info;
	HRESULT hr;
	ZeroMemory(&info, sizeof(info));
	hr = D3DXGetImageInfoFromFile(path.c_str(), &info);
	if (hr != D3D_OK)
		return NULL;
	hr = this->d3ddv->CreateOffscreenPlainSurface(
		info.Width,
		info.Height,
		D3DFMT_UNKNOWN,//Ch?n format t? ??ng
		D3DPOOL_DEFAULT,//Ch?n vùng nh? t? ??ng
		&surface,//Con tr? l?u surface ???c t?o ra
		NULL);
	if (hr != D3D_OK)
		return 0;
	//load hình lên surface ?ã t?o ra
	hr = D3DXLoadSurfaceFromFile(surface, NULL, NULL, path.c_str(), NULL, D3DX_DEFAULT, D3DCOLOR_XRGB(255, 255, 255), &info);
	if (hr != D3D_OK)
		return 0;
	return surface;
}

MContent::~MContent(void)
{

}
