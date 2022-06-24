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
#include <map>
#include <algorithm> // set_difference
#include <codecvt> // codecvt_utf8
#include <time.h>

using std::wstring;
using std::map;
using std::locale;


#endif //PCH_H

