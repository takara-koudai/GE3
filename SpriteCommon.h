#pragma once
#include <string>
#include <wrl.h>
#include <dxcapi.h>
#include <d3d12.h>

#include "DirectXCommon.h"

using namespace Microsoft::WRL;

//‹¤’Ê
class SpriteCommon
{
public:

	void Initialize(DirectXCommon* dxCommon);

	ID3D12RootSignature* GetRootSignature() { return rootSignature.Get(); }
	ID3D12PipelineState* GetPipelineState() { return graphicsPipelineState.Get(); }

private:

	static IDxcBlob* CompilerShader
	(const std::wstring& filePath,
	 const wchar_t* profile,
     IDxcUtils* dxcUtils,
	 IDxcCompiler3* dxcCompiler,
	 IDxcIncludeHandler* includeHander
	);

	DirectXCommon* dxCommon_;

	ComPtr<ID3D12RootSignature> rootSignature;

	ComPtr<ID3D12PipelineState> graphicsPipelineState;

};

