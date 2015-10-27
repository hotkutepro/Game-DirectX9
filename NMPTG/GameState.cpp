#include "GameState.h"

FrkKeyboard* GameState::m_hController = nullptr;
GameState* GameState::m_hGameState = nullptr;

void GameState::Initialize(FrkKeyboard* controller)
{
	m_hController = controller;

	// khoi tao nhan vat
	// khoi tao man va map

	// chuyen man 
}

void GameState::Release()
{
	// giai phong nhan vat
}

void GameState::StateUpdate()
{
	m_hGameState->Update();
}

void GameState::SwitchState(GameState* newState)
{
	m_hGameState = newState;
	m_hGameState->Enter();
}

void GameState::StateDraw()
{
	m_hGameState->Draw();
}

void GameState::Update()
{

}

void GameState::Draw()
{

}