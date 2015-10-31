#ifndef __PLAYINGSTATE_H__
#define __PLAYINGSTATE_H__

#include "GameState.h"
#include "FrkSound.h"

class PlayingState : public GameState
{
public:
	virtual void Update();
	virtual void Draw();
	virtual void Enter();
	static PlayingState* Get();
private:
	PlayingState();
	~PlayingState();

	virtual void CameraUpdate();
private:
	FrkSound* m_hSoundPlaying;
	//FrkText* m_hTextMenu;
	static PlayingState* m_hInstance;

};
#endif