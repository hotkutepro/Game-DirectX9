#include "FrkGame.h"


FrkGame::FrkGame(HINSTANCE hIns, int W, int H, char* name)
{
	this->hInstance = hIns;
	this->Width = W;
	this->Height = H;
	this->hWnd = NULL;
	this->d3d = NULL;
	this->d3ddev = NULL;
	strcpy(this->windowName, name);
}


FrkGame::~FrkGame(void)
{
}
//Ham xu ly cua so. Chi can quan tam den ?M_DESTROY
LRESULT CALLBACK FrkGame::WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	if (message == WM_DESTROY)
	{
		PostQuitMessage(0);
	}
	return DefWindowProc(hWnd, message, wParam, lParam);
}
// Tao cua so game, cai dat cai doi tuong directX o day
bool FrkGame::InitWindow()
{
	WNDCLASSEX wndclass;
	wndclass.cbSize = sizeof(WNDCLASSEX);
	wndclass.cbClsExtra = 0;
	wndclass.cbWndExtra = 0;
	wndclass.hIconSm = 0;
	wndclass.hIcon = 0;
	wndclass.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndclass.hInstance = this->hInstance;
	wndclass.lpfnWndProc = (WNDPROC)WndProc;
	wndclass.lpszClassName = "Game";
	wndclass.lpszMenuName = NULL;
	wndclass.style = CS_HREDRAW | CS_VREDRAW;

	if (!RegisterClassEx(&wndclass))
	{
		return false;
	}
	this->hWnd = CreateWindow(
		"Game",
		this->windowName,
		WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		this->Width,
		this->Height,
		NULL,
		NULL,
		this->hInstance,
		NULL);
	if (!this->hWnd)
		return false;
	ShowWindow(this->hWnd, SW_NORMAL);
	UpdateWindow(this->hWnd);
	return true;
}
//
//Init game data
void FrkGame::InitData()
{
	//load data
}

void FrkGame::Update(float gameTime)
{

}

void FrkGame::Render()
{

}

bool FrkGame::InitDX()
{
	//tao mot doi tuong Direct3D
	this->d3d = Direct3DCreate9(D3D_SDK_VERSION);
	if (!this->d3d)
		return false;
	//tao thiet bi ve
	D3DPRESENT_PARAMETERS d3dpp;
	ZeroMemory(&d3dpp, sizeof(d3dpp));
	//thong so man hinh
	d3dpp.BackBufferCount = 1;// 1 backbuffer
	d3dpp.BackBufferFormat = D3DFMT_UNKNOWN;//auto format
	d3dpp.BackBufferWidth = this->Width;
	d3dpp.BackBufferHeight = this->Height;
	d3dpp.hDeviceWindow = this->hWnd;// Handle cua so ve~
	d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;// tham so hay dung
	d3dpp.Windowed = true;// che do co cua so
	HRESULT hr = this->d3d->CreateDevice(D3DADAPTER_DEFAULT,//chon thiet bi ve mac dinh
		D3DDEVTYPE_HAL,//su dung ho tro phan cung
		this->hWnd,// Cua so ve
		D3DCREATE_SOFTWARE_VERTEXPROCESSING,
		&d3dpp,// thong so cho back buffer
		&this->d3ddev//con tro nhan du lieu sau khi tao device
		);

	if (FAILED(hr))
	{
		return false;
	}
	return true;
}
