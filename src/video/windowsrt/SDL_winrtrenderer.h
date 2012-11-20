﻿#pragma once

#include "Direct3DBase.h"

struct VertexPositionColor
{
	DirectX::XMFLOAT3 pos;
	DirectX::XMFLOAT3 color;
};

// This class renders a simple spinning cube.
ref class SDL_winrtrenderer sealed : public Direct3DBase
{
public:
	SDL_winrtrenderer();

	// Direct3DBase methods.
	virtual void CreateDeviceResources() override;
	virtual void Render() override;

private:
	bool m_loadingComplete;

	Microsoft::WRL::ComPtr<ID3D11InputLayout> m_inputLayout;
	Microsoft::WRL::ComPtr<ID3D11Buffer> m_vertexBuffer;
	Microsoft::WRL::ComPtr<ID3D11VertexShader> m_vertexShader;
	Microsoft::WRL::ComPtr<ID3D11PixelShader> m_pixelShader;

	uint32 m_vertexCount;
};
