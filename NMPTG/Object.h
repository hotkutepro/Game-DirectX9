#pragma once
#include "FrkShareControl.h"

class Object
{
protected:
	D3DXVECTOR2 m_hSite;
	float m_hAcceleration;
	float m_hSpeed;
public:
	virtual void Init(){};
	virtual void Render(){};
	virtual void Update(){};
	virtual void SetSite(){};
	Object();
	~Object();
};

