#pragma once

#ifdef TR_PLATFORM_WINDOWS
	#ifdef TR_BUILD_DLL
		#define TWOREEL_API __declspec(dllexport)
	#else
		#define TWOREEL_API __declspec(dllimport)
	#endif // TR_BUILD_DLL
#else
	#error Two Reel only supports Windows!
#endif