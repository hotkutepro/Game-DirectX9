#include "Animals.h"
#include "FrkShareControl.h"

Animals::Animals()
{
	m_hSpeed = 4;
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
	m_hMarioLeft = new FrkSprite(tLeft, 128, 32, 4, 4);
	m_hRenderMario = m_hMarioRight;
	
}

void Animals::Render()
{
	m_hRenderMario->Render(m_hSite);
}
float delay = 0;
void Animals::Update(float gameTime)
{
	/*delay += gameTime / 5;
	if (delay > gameTime)
	{
		m_hRenderMario->Next();
		delay = 0;
	}*/
	m_hSite.x+=m_hSpeed;
	if (m_hSite.x> 200)
	{
		m_hRenderMario = m_hMarioLeft;
		m_hSpeed = -m_hSpeed;
	}
	else if (m_hSite.x < 50)
	{
		m_hRenderMario = m_hMarioRight;
		m_hSpeed = -m_hSpeed;
	}
	m_hRenderMario->Next();
		
}

void Animals::SetSite(int x, int y)
{
	m_hSite.x = x;
	m_hSite.y = y;
}
