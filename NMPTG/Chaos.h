#pragma once

#include "FrkGame.h"
#include "Animals.h"
#include "FrkGraphic.h"
#include "FrkSound.h"

class Chaos : public FrkGame
{
protected:
	FrkGraphic* graphic;
	Animals* mario;
	Animals* mario1;
	Animals* mario2;
	Animals* mario3;
	FrkContent* content;
	FrkTexture* wall;
	FrkSound* music;
	tchar* audioPath = "sound1.wav";
public:	
	Chaos(HINSTANCE hInst, int hW, int hH, char* hName);
	~Chaos();


	void Load();

	void Render();
	
	void Update(float gameTime);
	
	
};

