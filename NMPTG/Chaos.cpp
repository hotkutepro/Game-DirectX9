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
	FrkContent* content = new FrkContent(this);
	mario = new Animals();
	mario->Load(content);
	mario->SetSite();
}



void Chaos::Update(float gameTime)
{
	mario->Update(gameTime);
}

void Chaos::Render()
{
	graphic->Begin();
	mario->Render();
	graphic->End();
}
