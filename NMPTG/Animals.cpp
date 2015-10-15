#include "Animals.h"
#include "FrkShareControl.h"

Animals::Animals()
{
}


Animals::~Animals()
{
}

void Animals::Load(FrkContent* content)
{
	FrkTexture* tLeft;
	tLeft = content->LoadTexture("marioleft.png");
	FrkTexture* tRight;
	tRight = content->LoadTexture("marioright.png");
	m_hMarioRight = new FrkSprite(tRight, 100, 20,5,5);
	m_hMarioLeft = new FrkSprite(tLeft, 100, 20, 5, 5);
	m_hRenderMario = m_hMarioRight;
	
}

void Animals::Render()
{
	m_hRenderMario->Render(m_hSite);
}

void Animals::Update(float gameTime)
{
	m_hSite.x+=1;
	m_hRenderMario->Next();
}

void Animals::SetSite()
{
	m_hSite.x = 50;
	m_hSite.y = 50;
}
