#pragma once

#ifndef stdEnvironment
	#define stdFunctions

	// Check windows
	#if _WIN32 || _WIN64
		#if _WIN64
			#define ENVIROMENT64
		#else
			#define ENVIROMENT32
		#endif
	#endif

	// Check GCC
	#if __GNUC__
		#if __x86_64__ || __ppc64__
			#define ENVIROMENT64
		#else
			#define ENVIROMENT32
		#endif
	#endif

	#ifndef ENVIRONMENT32 
		#ifndef ENVIRONMENT64
			#define ENVIROMENT64
		#endif // !ENVIRONMENT32 
	#endif // !ENVIRONMENT64

	#include "stdEnviroment_32.h"
	#include "stdEnviroment_64.h"

#endif // !stdEnvironment