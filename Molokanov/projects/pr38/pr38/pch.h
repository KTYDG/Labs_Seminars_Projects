﻿// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifdef  PR38_EXPORTS
#define PR38 __declspec(dllexport)  
#else
#define PR38 __declspec(dllimport)
#endif


#ifndef PCH_H
#define PCH_H

#include "framework.h"
#include <iostream>
#include <vector>

using namespace std;


#endif //PCH_H