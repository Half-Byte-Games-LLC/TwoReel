#pragma once
#include "Application.h"

#ifdef TR_PLATFORM_WINDOWS

extern TwoReel::Application* TwoReel::CreateApplication();

int main(int arc, char** argv)
{
	auto app = TwoReel::CreateApplication();
	app->Run();
	delete app;

}

#endif // TR_PLATFORM_WINDOWS
