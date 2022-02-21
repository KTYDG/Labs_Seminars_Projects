#pragma warning( disable: 4251 ) // Опять отключаем предупреждение
#ifdef PR36_EXPORTS
#define PR36 __declspec(dllexport)
#else
#define PR36 __declspec(dllimport)
#endif

#ifndef PCH_H
#define PCH_H

#include "framework.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <locale>
#include <codecvt>

#endif //PCH_H

