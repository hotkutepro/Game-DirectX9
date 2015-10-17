#pragma once
#include "Object.h"

#include "FrkSprite.h"
class Animals : public Object
{
private:
	FrkSprite* m_hMarioLeft;
	FrkSprite* m_hMarioRight;
	FrkSprite* m_hRenderMario;
public:
	Animals();
	~Animals();
	void Load();
	void Render();
	void Update(float gameTime);
	void SetSite(int x,int y);
};

