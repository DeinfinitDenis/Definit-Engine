#pragma once

#include "Core.h"

namespace DefinitEngine 
{

	class DEFINITENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();

	};

	Application* CreateApplication();

}
