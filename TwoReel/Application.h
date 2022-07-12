#pragma once

#include "Core.h"
namespace TwoReel {

	class TWOREEL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in client
	Application* CreateApplication();

}



