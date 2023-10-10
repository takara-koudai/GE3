#pragma once
#include <Windows.h>
#include <wrl.h>

#define DIRECTINPUT_VERSION     0x0800   // DirectInput�̃o�[�W�����w��
#include <dinput.h>

#pragma comment(lib, "dinput8.lib")
#pragma comment(lib, "dxguid.lib")

//using namespace Microsoft::WRL;

class Input
{
public:

	//������
	void Initialize(HINSTANCE hInstance,HWND hwnd);

	//�X�V
	void Update();

private:

	Microsoft::WRL::ComPtr<IDirectInputDevice8> keyboard;

};

