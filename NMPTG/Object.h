#pragma once
#include <d3dx9math.h>


class Object
{
protected:
	D3DXVECTOR2 m_hSite;
	float m_hAcceleration;
	float m_hSpeed;
public:
	void Load();
	void Render();
	void Update();
	void SetSite();
	Object();
	~Object();
};

