#pragma once
#include "FrkContent.h"
#include "FrkGame.h"
class ResourcesManager
{
private:
	static ResourcesManager* Instance ;
	FrkGame* game;
public:
	static ResourcesManager GetInstance();
	void Init(FrkContent* Content);
	ResourcesManager();
	~ResourcesManager();
};

