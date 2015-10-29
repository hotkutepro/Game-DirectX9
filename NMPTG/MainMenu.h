#ifndef __MAINMENU_H__
#define __MAINMENU_H__

#include "GameState.h"

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
	FrkSound* m_hSound;
	FrkText* m_hText;
	FrkSprite* m_hSprite;
	static MainMenu* m_hInstance;
};
#endif