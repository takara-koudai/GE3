#pragma once
#include <Windows.h>
#include <wrl.h>

#define DIRECTINPUT_VERSION     0x0800   // DirectInputのバージョン指定
#include <dinput.h>

#pragma comment(lib, "dinput8.lib")
#pragma comment(lib, "dxguid.lib")

#include "WinApp.h"

//using namespace Microsoft::WRL;

class Input
{
public:

	//初期化
	void Initialize(WinApp* winApp);

	//更新
	void Update();

	//任意のボタンを押したとき
	bool PushKey(BYTE keyNumber);

	//任意のボタンを押した瞬間
	bool TriggerKey(BYTE keyNumber);

	//任意のボタンが離された瞬間



private:

	WinApp* winApp_ = nullptr;

	Microsoft::WRL::ComPtr<IDirectInputDevice8> keyboard;

	BYTE key[256] = {};
	BYTE keyPre[256] = {};

};

