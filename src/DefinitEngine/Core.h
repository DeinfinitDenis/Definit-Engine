#pragma once

#ifdef DF_PLATFORM_WINDOWS
	#ifdef DF_BUILD_DLL
		#define DEFINITENGINE_API __declspec(dllexport)
	#else
		#define DEFINITENGINE_API __declspec(dllimport)
	#endif 
#else
	#error I don't know why you don't use windows!

#endif