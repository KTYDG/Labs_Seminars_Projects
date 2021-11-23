// pr35.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "pr35.h"


// This is an example of an exported variable
PR35_API int npr35=0;

// This is an example of an exported function.
PR35_API int fnpr35(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
Cpr35::Cpr35()
{
    return;
}
