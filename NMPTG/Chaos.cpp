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
	camera = new FrkCamera(2848, 670);
	map = new Map();
	map->Init("hihi.txt", _LocalContent->LoadTexture("hihi.png"));
	mario = new Animals();
	mario->Load();
	mario->SetSite(200,200);

	mario1 = new Animals();
	mario1->Load();
	mario1->SetSite(250, 250);

	mario2 = new Animals();
	mario2->Load();
	mario2->SetSite(100, 100);

	mario3 = new Animals();
	mario3->Load();
	mario3->SetSite(50, 350);
	FrkSound* music;
	music->InitializeSoundClass(this->GetwndHandle());
	music= new FrkSound("E.wav");
	
	music->Play();

}



void Chaos::Update(float gameTime)
{
	//mario->Update(gameTime);
	camera->Update(mario->getPosition());
	mario1->Update(gameTime);
	mario2->Update(gameTime);
	mario3->Update(gameTime);
	_LocalKeyboard->GetDeviceState();
	if (_LocalKeyboard->IsKeyDown(DIK_LEFT))
	{
		mario->SetSite(mario->getPosition().x - 30, mario->getPosition().y);
		mario->m_hRenderMario = mario->m_hMarioLeft;
		mario->m_hRenderMario->Next();
	}
	if (_LocalKeyboard->IsKeyDown(DIK_RIGHT))
	{ 
		mario->SetSite(mario->getPosition().x + 30, mario->getPosition().y);
		mario->m_hRenderMario = mario->m_hMarioRight;
		mario->m_hRenderMario->Next();
	}
	if (_LocalKeyboard->IsKeyDown(DIK_UP))
	{
		mario->SetSite(mario->getPosition().x , mario->getPosition().y+5);
		mario->m_hRenderMario = mario->m_hMarioLeft;
		mario->m_hRenderMario->Next();
	}
	if (_LocalKeyboard->IsKeyDown(DIK_DOWN))
	{
		mario->SetSite(mario->getPosition().y , mario->getPosition().y-5);
		mario->m_hRenderMario = mario->m_hMarioRight;
		mario->m_hRenderMario->Next();
	}
	_LocalKeyboard->ClearBuffer();
}

void Chaos::Render()
{
	_LocalGraphic->Begin(camera->GetTransformMatrix());	
	map->Render();
	mario->Render();
	mario1->Render();
	mario2->Render();
	mario3->Render();
	
	_LocalGraphic->End();
}
