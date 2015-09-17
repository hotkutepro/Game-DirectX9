#pragma once
#include <d3d9.h>
#include "MContent.h"
class MResources
{
private:
	static MResources* Instance ;
public:
	static MResources GetInstance();

	MResources();
	~MResources();
};

