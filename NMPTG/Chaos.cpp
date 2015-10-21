#include "Chaos.h"
#include "FrkShareControl.h"
Chaos::Chaos(HINSTANCE hInst, int hW, int hH, char* hName) :FrkGame(hInst, hW, hH, hName)
{
	
}


Chaos::~Chaos()
{
}

void Chaos::Load()
{				
	map = new Map();
	map->Init("hihi.txt", _LocalContent->LoadTexture("hihi.png"));
	mario = new Animals();
	mario->Load();
	mario->SetSite(50,50);

	mario1 = new Animals();
	mario1->Load();
	mario1->SetSite(50, 150);

	mario2 = new Animals();
	mario2->Load();
	mario2->SetSite(50, 250);

	mario3 = new Animals();
	mario3->Load();
	mario3->SetSite(50, 350);
}



void Chaos::Update(float gameTime)
{
	//mario->Update(gameTime);
	mario1->Update(gameTime);
	mario2->Update(gameTime);
	mario3->Update(gameTime);
	_LocalKeyboard->GetDeviceState();
	if (_LocalKeyboard->IsKeyDown(DIK_LEFT))
	{
		mario->SetSite(mario->getPosition().x - 5, mario->getPosition().y);
		mario->m_hRenderMario = mario->m_hMarioLeft;
		mario->m_hRenderMario->Next();
	}
	if (_LocalKeyboard->IsKeyDown(DIK_RIGHT))
	{ 
		mario->SetSite(mario->getPosition().x + 5, mario->getPosition().y);
		mario->m_hRenderMario = mario->m_hMarioRight;
		mario->m_hRenderMario->Next();
	}
	_LocalKeyboard->ClearBuffer();
}

void Chaos::Render()
{
	_LocalGraphic->Begin();	
	map->Render();
	mario->Render();
	mario1->Render();
	mario2->Render();
	mario3->Render();
	
	_LocalGraphic->End();
}
