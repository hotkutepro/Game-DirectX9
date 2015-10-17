#pragma once

#include "FrkGame.h"
#include "Animals.h"
#include "FrkGraphic.h"
#include "FrkSound.h"
#include"Map.h"
class Chaos : public FrkGame
{
protected:
	FrkGraphic* graphic;
	Animals* mario;
	Animals* mario1;
	Animals* mario2;
	Animals* mario3;	
	Map* map;
public:	
	Chaos(HINSTANCE hInst, int hW, int hH, char* hName);
	~Chaos();


	void Load();

	void Render();
	
	void Update(float gameTime);
	
	
};

