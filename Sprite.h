#pragma once
#include "DirectXCommon.h"
#include <wrl.h>
#include <d3d12.h>

#include "SpriteCommon.h"

using namespace Microsoft::WRL;

//�P��
class Sprite
{
public:

	void Initialize(DirectXCommon* dxCommon,SpriteCommon* common);

	void Draw();

private:

	DirectXCommon* dxCommon_ = nullptr;

	ComPtr<ID3D12Resource> vertexResource = nullptr;

	SpriteCommon* common_ = nullptr;

	D3D12_VERTEX_BUFFER_VIEW vertexBufferView{};
};

