﻿#include "FrkCamera.h"


FrkCamera::FrkCamera()
{
}

FrkCamera::FrkCamera(float map_Width, float map_height)
{
	this->m_hMaxWidth = map_Width;
	this->m_hMaxHeight = map_height;
	m_hVpx = m_hVpy = 0;
	D3DXMatrixIdentity(&MatrixI);
	this->MatrixI._22 = -1;
}


FrkCamera::~FrkCamera()
{
}

void FrkCamera::Update(D3DXVECTOR2 target)
{
	m_hVpx = target.x - Center_W;
	if (m_hVpx < 0)
		m_hVpx = 0;
	if (m_hVpx > (m_hMaxWidth - Center_W))
		m_hVpx = m_hMaxWidth;

	m_hVpy = target.x - Center_H;
	if (m_hVpy < 0)
		m_hVpy = 0;
	if (m_hVpy>m_hMaxHeight - Center_H)
		m_hVpy = m_hMaxHeight - Center_H;
}

D3DXMATRIX* FrkCamera::GetTransformMatrix()
{
	D3DXMATRIX Result;
	D3DXMATRIX MatrixTran;
	D3DXMatrixTranslation(&MatrixTran, -m_hVpx, m_hVpy, 0);
	D3DXMatrixMultiply(&Result, &MatrixI, &MatrixTran);
	return &Result;
}
