// enginelib.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "enginelib.h"


// This is an example of an exported variable
ENGINELIB_API int nenginelib=0;

// This is an example of an exported function.
ENGINELIB_API int fnenginelib(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
Cenginelib::Cenginelib()
{
    return;
}
