#include "MResources.h"

MResources* MResources::Instance = NULL; // k co dong nay=>Error LNK 2001(private class ....)

MResources MResources::GetInstance()
{
	if (Instance == NULL)
	{
		Instance = new MResources();
	}
	return *Instance;
}

MResources::MResources()
{
}


MResources::~MResources()
{
}
