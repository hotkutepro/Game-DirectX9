#include "FrkTexture.h"

FrkTexture::FrkTexture()
{
	lpDirect3DTexture = 0;
}

FrkTexture::FrkTexture()
{

}

void FrkTexture::LoadTextureFromFile(LPDIRECT3DDEVICE9 lpDirectDevice, LPCSTR fileName, D3DCOLOR colorKey)
{
	D3DXIMAGE_INFO infoImg;
	HRESULT hr;
	hr = D3DXGetImageInfoFromFile(fileName, &infoImg);

	if (FAILED(hr))
	{
		return;
	}

	width = infoImg.Width;
	height = infoImg.Height;
	hr = D3DXCreateTextureFromFileEx(
		lpDirectDevice,
		fileName,
		infoImg.Width,
		infoImg.Height,
		1,
		D3DUSAGE_DYNAMIC,
		D3DFMT_UNKNOWN,
		D3DPOOL_DEFAULT,
		D3DX_DEFAULT,
		D3DX_DEFAULT,
		colorKey,
		&infoImg,
		0,
		&lpDirect3DTexture
		);
	if (FAILED(hr))
	{
		return;
	}
}

void FrkTexture::RenderTexture(
	LPD3DXSPRITE lpDSpriteHandle,
	D3DXVECTOR2 position,
	D3DXVECTOR2 scale,
	float angle,
	RECT *srcRect,
	float deep,
	D3DCOLOR color)
{
	D3DXVECTOR3 currentPosition(position.x, position.y, deep); // toa  do trong the gioi thuc

	D3DXMAXTRIX oldMatrix; // ma tran luu lai phep transform cua SpriteBatch

	lpDSpriteHandle->GetTranSform(&oldMatrix);

	// lay vi tri cua vat the lam tam xoay (vi tri cua vat la vi tri chinh giua cua vat)
	D3DXVECTOR2 centerScaleAndRotate = D3DXVECTOR2(position.x, position.y);

	D3DXMATRIX matrixScalingRotate; // ma tran rotate, scale

	D3DXMatrixTransformation2d(&matrixScalingRotate,
		&centerScaleAndRotate,
		0.0f,
		&scale,
		&centerScaleAndRotate,
		D3DXToRadian(angle), 0);
	D3DXMATRIX finalMatrix = matrixScalingRotate * oldMatrix;

	// ma tran chuyen toa do vi tri cua vat the tu the gioi thuc sang toa do trong directX de ve
	lpDSpriteHandle->SetTranform(&finalMatrix);

	lpDSpriteHandle->Draw(
		this->lpDirect3DTexture,
		srcRect,
		&D3DXVECTOR3((float)(srcRect->right - srcRect->left) / 2, (float)(srcRect->bottom - srcRect->top) / 2, 0),
		&currentPosition,
		color);

	lpDSpriteHandle->SetTransform(&oldMatrix);
}