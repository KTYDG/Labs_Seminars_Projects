// pch.cpp: source file corresponding to the pre-compiled header

#include "pch.h"
struct Leaks {
    ~Leaks() { _CrtDumpMemoryLeaks(); }
} _leak;

// When you are using pre-compiled headers, this source file is necessary for compilation to succeed.
