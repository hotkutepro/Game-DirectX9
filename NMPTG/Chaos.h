#pragma once

#include "FrkGame.h"
#include "Animals.h"
#include "FrkGraphic.h"

class Chaos : public FrkGame
{
protected:
	FrkGraphic* graphic;
	Animals* mario;
public:	
	Chaos(HINSTANCE hInst, int hW, int hH, char* hName);
	~Chaos();


	void Load();

	void Render();
	
	void Update(float gameTime);
	
	
};

