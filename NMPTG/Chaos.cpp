#include "Chaos.h"
#include "FrkControl.h"
#include "FrkShareControl.h"
Chaos::Chaos(HINSTANCE hInst, int hW, int hH, char* hName) :FrkGame(hInst, hW, hH, hName)
{
	
}


Chaos::~Chaos()
{
}

void Chaos::Load()
{
	graphic = new FrkGraphic(this);
	_LocalGraphic = graphic;
	content = new FrkContent(this);
	wall = new FrkTexture();
	wall = content->LoadTexture("wall.jpg");
	/*music->InitializeSoundClass(this->GetwndHandle());
	if (music->ReleaseSoundClass())

	music = new FrkSound("E.mp3");*/
	mario = new Animals();
	mario->Load(content);
	mario->SetSite(50,50);

	mario1 = new Animals();
	mario1->Load(content);
	mario1->SetSite(50, 150);

	mario2 = new Animals();
	mario2->Load(content);
	mario2->SetSite(50, 250);

	mario3 = new Animals();
	mario3->Load(content);
	mario3->SetSite(50, 350);
}



void Chaos::Update(float gameTime)
{
	mario->Update(gameTime);
	mario1->Update(gameTime);
	mario2->Update(gameTime);
	mario3->Update(gameTime);

}

void Chaos::Render()
{
	graphic->Begin();
	_LocalGraphic->DrawTexture(wall, D3DXVECTOR2(0, 0), D3DCOLOR_XRGB(255, 255, 255));
	mario->Render();
	mario1->Render();
	mario2->Render();
	mario3->Render();
	
	graphic->End();
}
