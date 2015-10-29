#include "MainMenu.h"

MainMenu* MainMenu::m_hInstance = nullptr;

MainMenu::MainMenu()
{
	// khoi tao  hinh anh

	// Khoi tao am thanh

	// Khoi tao chu

	Enter();
}

MainMenu::~MainMenu()
{
	// Giai phong con tro
}

void MainMenu::Update()
{
	// xu ly phim, --> chuyen state Pause
	// Choi nhac
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
	// thiet lap cac thong so con lai
}

void MainMenu::CameraUpdate()
{
	// update camera
}