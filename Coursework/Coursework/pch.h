// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.
#ifdef COURSEWORK_EXPORTS
#define COURSEWORK __declspec(dllexport)
#else
#define COURSEWORK __declspec(dllimport)
#endif


#ifndef PCH_H
#define PCH_H

#include "framework.h"
#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>
#include <codecvt> // codecvt_utf8
#include <time.h>

using std::wstring;
using std::vector;
using std::locale;


#endif //PCH_H
