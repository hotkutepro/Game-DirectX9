#include "PlayingState.h"
#include "FrkShareControl.h"

PlayingState* PlayingState::m_hInstance = nullptr;

PlayingState::PlayingState()
{
	// khoi tao  hinh anh
	//m_hSoundMenu->InitializeSoundClass(this->);
	//m_hSoundMenu = new FrkSound(_T("01_Grass_Land.wav"));
	// Khoi tao am thanh
	m_hSoundPlaying = new FrkSound(_T("02_Desert_Land.wav"));
	// Khoi tao chu
	//m_hTextMenu->InitializeFont();

	Enter();
}

PlayingState::~PlayingState()
{
	// Giai phong con tro
}

void PlayingState::Update()
{
	//_LocalKeyboard->GetDeviceState();

	// xu ly phim, --> chuyen state Pause
	/*if (_LocalKeyboard->IsKeyDown(DIK_LEFT))
	{
		m_hSoundMenu->Play();
	}*/
	// Choi nhac
	m_hSoundPlaying->Play();

}

void PlayingState::Draw()
{
	// Ve hinh anh
	// Ve chu

}

PlayingState* PlayingState::Get()
{
	if (m_hInstance == nullptr)
	{
		m_hInstance = new PlayingState();
	}
	return m_hInstance;
}

void PlayingState::Enter()
{
	// thiet lap lai cac thong so
}

void PlayingState::CameraUpdate()
{
	// update camera
}