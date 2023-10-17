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

	//�C�ӂ̃{�^�����������Ƃ�
	bool PushKey(BYTE keyNumber);

	//�C�ӂ̃{�^�����������u��
	bool TriggerKey(BYTE keyNumber);

	//�C�ӂ̃{�^���������ꂽ�u��



private:

	Microsoft::WRL::ComPtr<IDirectInputDevice8> keyboard;

	BYTE key[256] = {};
	BYTE keyPre[256] = {};

};

