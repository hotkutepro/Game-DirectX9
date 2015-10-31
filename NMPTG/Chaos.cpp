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
	//hero = new Hero();
	//hero->Load();
	//sw = new SweptAABB();	
	//br = new Brick();
	//br->Load();
	//camera = new FrkCamera(2848, 670);
	//map = new Map();
	//map->Init("hihi.txt", _LocalContent->LoadTexture("hihi.png"));
	FrkSound* music;
	music->InitializeSoundClass(this->GetwndHandle());
	//// truyen tham so keyboard
	GameState::Initialize();
	//music = new FrkSound();
	//FrkSound* nhac;
	//nhac = new FrkSound(_T("01_Grass_Land.wav"));
	//nhac->Play();
	//music->Play(_T("E.wav"));

}



void Chaos::Update(float gameTime)
{
	//mario->Update(gameTime);
	//camera->Update(hero->GetPosition());
	//hero->Update(gameTime);
	//float normalx=0, normaly=0;

	//float time=sw->SweptAABB1(hero->getBox(), br->m_hBox, normalx, normaly);
	//br->Update(normalx,normaly);

	// Update state
	GameState::StateUpdate();
}

void Chaos::Render()
{
	//_LocalGraphic->Begin(camera->GetTransformMatrix());	
	//map->Render();
	//br->Render();
	//hero->Render();
	////Ve state
	GameState::StateDraw();
	//
	//_LocalGraphic->End();
}
