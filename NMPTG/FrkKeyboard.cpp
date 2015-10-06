#include "FrkKeyboard.h"


void FrkKeyboard::InitDirectInput()
{
	HRESULT hr = DirectInput8Create(m_hGame->GethIstance(), DIRECTINPUT_VERSION, IID_IDirectInput8, (void**)&m_hDI_Object, NULL);
	if (FAILED(hr))
		MessageBox(NULL,"Không khởi tạo được đối tượng DirectInput",NULL,1);
	
	
}
void FrkKeyboard::CreateDevice()
{
	m_hDI_Device = 0;
	HRESULT hr = m_hDI_Object->CreateDevice(GUID_SysKeyboard,&(m_hDI_Device), NULL);	
	if (FAILED(hr))
		MessageBox(NULL, "Không khởi tạo được thiết bị DirectInput ", NULL, 1);
}
void FrkKeyboard::SetDataFormat()
{
	HRESULT hr = m_hDI_Device->SetDataFormat(&c_dfDIKeyboard);
	if (FAILED(hr))
		MessageBox(NULL, "Không thiết lập được định dạng dữ liệu",NULL,1);
}
void FrkKeyboard::SetCooperativeLevel()
{
	HRESULT hr = m_hDI_Device->SetCooperativeLevel(m_hGame->GetwndHandle(), DISCL_FOREGROUND|DISCL_NONEXCLUSIVE);
	if (FAILED(hr))
		MessageBox(NULL, "Lỗi thiết lập mức truy cập của thiết bị",NULL,1);
}

void FrkKeyboard::Acquire()
{
	m_hDI_Device->Acquire();
}
void FrkKeyboard::UnAcquire()
{
	m_hDI_Device->Unacquire();
}
void FrkKeyboard::GetDeviceState()
{
	m_hDI_Device->GetDeviceState(sizeof(m_hBuffer), &m_hBuffer);

}
bool FrkKeyboard::IsKeyDown(int key)
{
	if (KEYDOWN(m_hBuffer, DIK_A))
	{
		MessageBox(NULL, "A", NULL, 1);
	}
	return true;
	//return m_hBuffer[key] & 0x80;
}
void FrkKeyboard::Init(){
	InitDirectInput();
	CreateDevice();
	SetCooperativeLevel();
	SetDataFormat();
	Acquire();
}
FrkKeyboard::FrkKeyboard(FrkGame* game)
{
	m_hGame = game;	
}
FrkKeyboard::FrkKeyboard()
{
}


FrkKeyboard::~FrkKeyboard()
{
}
