﻿#include "Input.h"
#include "WinApp.h"
#include "DirectXCommon.h"

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

    //input
    Input* input_ = nullptr;
    WinApp* winApp_ = nullptr;
    DirectXCommon* dxCommon_ = nullptr;

    //WindowsAPI初期化処理
    winApp_ = new WinApp();
    winApp_->Initialize();

    // DirectX初期化処理

    dxCommon_ = new DirectXCommon();
    dxCommon_->Initialize(winApp_);


    // DirectX初期化処理　ここまで

    //初期化
    input_ = new Input();
    input_->Initialize(winApp_);


    // ゲームループ
    while (true) {
        
        if (winApp_->Update() == true)
        {
            break;
        }

        //入力
        input_->Update();


        //更新前処理
        dxCommon_->PreDraw();

        //更新後処理
        dxCommon_->PostDraw();

    }

    delete input_;

    delete dxCommon_;

    winApp_->Finalize();
    delete winApp_;

    return 0;
}
