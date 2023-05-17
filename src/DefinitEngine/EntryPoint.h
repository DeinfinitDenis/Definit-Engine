#pragma once

#ifdef DF_PLATFORM_WINDOWS
extern DefinitEngine::Application* DefinitEngine::CreateApplication();

int main(int argc, char** argv)
{
	//Simulator* simulator = new Simulator();
	auto app = DefinitEngine::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error I don't know why you don't use windows!

#endif