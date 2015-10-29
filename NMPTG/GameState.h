#ifndef __GAMESTATE_H__
#define __GAMESTATE_H__

#include "FrkKeyboard.h"
#include "FrkCamera.h"
#include "FrkSound.h"
#include "FrkSprite.h"
#include "FrkText.h"

class GameState
{
public:
	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual void Enter() = 0;

	static void Initialize(FrkKeyboard* controller);

	static void Release();

	static void SwitchState(GameState* newState);

	virtual void CameraUpdate() = 0;

	static void StateUpdate();

	static void StateDraw();

protected:
	static FrkKeyboard* m_hController;
	static GameState* m_hGameState;
};

#endif