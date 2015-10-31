#include "MainMenu.h"
#include "FrkShareControl.h"
#include "PlayingState.h"

MainMenu* MainMenu::m_hInstance = nullptr;

MainMenu::MainMenu()
{
	// khoi tao  hinh anh
	//m_hSoundMenu->InitializeSoundClass(this->);
	//m_hSoundMenu = new FrkSound(_T("01_Grass_Land.wav"));
	// Khoi tao am thanh
	m_hSoundMenu = new FrkSound(_T("01_Grass_Land.wav"));
	// Khoi tao chu
	//m_hTextMenu->InitializeFont();

	Enter();
}

MainMenu::~MainMenu()
{
	// Giai phong con tro
}

void MainMenu::Update()
{
	_LocalKeyboard->GetDeviceState();

	// xu ly phim, --> chuyen state Pause
	if (_LocalKeyboard->IsKeyDown(DIK_LEFT))
	{
		m_hSoundMenu->Stop();
		SwitchState(PlayingState::Get());
	}
	else
	{
		m_hSoundMenu->Play();
	}

}

void MainMenu::Draw()
{
	// Ve hinh anh
	// Ve chu

}

MainMenu* MainMenu::Get()
{
	if (m_hInstance == nullptr)
	{
		m_hInstance = new MainMenu();
	}
	return m_hInstance;
}

void MainMenu::Enter()
{
	// thiet lap lai cac thong so
}

void MainMenu::CameraUpdate()
{
	// update camera
}