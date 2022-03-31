#include "stdafx.h"
#include "Game.h"
#include "Renderer.h"
#include "Input.h"

bool Initialize()
{
	if (false == InitializeRenderer())
	{
		return false;
	}

	return true;
}

void processInput()
{
	UpdateInput();
}

void update()
{
	if (GetButton(KEYCODE_W))
	{
		SetKeyMessage(KEYCODE_W);
	}
	else if (GetButton(KEYCODE_D))
	{
		SetKeyMessage(KEYCODE_D);
	}
	else if (GetButton(KEYCODE_S))
	{
		SetKeyMessage(KEYCODE_S);
	}
	else if (GetButton(KEYCODE_A))
	{
		SetKeyMessage(KEYCODE_A);
	}
}

void render()
{
	RenderMap();
}

int32_t Run()
{
	while (true)
	{
		processInput();
		update();
		render();
	}

	return 0;
}