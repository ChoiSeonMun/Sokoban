#include "stdafx.h"
#include "Game.h"
#include "Renderer.h"
#include "Input.h"
#include "Timer.h"

bool Initialize()
{
	if (false == InitializeRenderer())
	{
		return false;
	}

	InitializeTimer();

	return true;
}

void processInput()
{
	UpdateInput();
}

void update()
{

}

void render()
{
	RenderMap();
}

int32_t Run()
{
	while (true)
	{
		UpdateTimer();
		processInput();
		update();
		render();
	}

	return 0;
}