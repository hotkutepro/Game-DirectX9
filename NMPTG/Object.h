#pragma once
#include <d3dx9math.h>
#include "FrkContent.h"


class Object
{
protected:
	D3DXVECTOR2 m_hSite;
	float m_hAcceleration;
	float m_hSpeed;
public:
	virtual void Load(FrkContent*);
	virtual void Render();
	virtual void Update(float gameTime);
	virtual void SetSite(int x, int y);
	Object();
	~Object();
};

