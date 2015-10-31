#ifndef __MAINMENU_H__
#define __MAINMENU_H__

#include "GameState.h"
#include "FrkSound.h"

class MainMenu : public GameState
{
public:
	virtual void Update();
	virtual void Draw();
	virtual void Enter();
	static MainMenu* Get();
private:
	MainMenu();
	~MainMenu();

	virtual void CameraUpdate();
private:
	FrkSound* m_hSoundMenu;
	//FrkText* m_hTextMenu;
	static MainMenu* m_hInstance;

};
#endif