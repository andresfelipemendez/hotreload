// hotreload.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <filesystem>
#include <chrono>

// #include "../enginelib/enginelib.h"

#define WIN32_LEAN_AND_MEAN 
#include <Windows.h>

namespace fs = std::filesystem;

typedef int (*FnEnginelib)();

int main()
{    
    // hardcoding path for now
    std::string originalDLLpath = "C:\\Users\\andres\\Development\\hotreload\\x64\\Debug\\enginelib.dll";
    std::string copyDLLpath = "C:\\Users\\andres\\Development\\hotreload\\x64\\Debug\\enginelib_copy.dll";
    if (!fs::exists(originalDLLpath)) {
        std::cerr << "Original DLL not found: " << originalDLLpath << '\n';
        return -1;
    }
    else {
        fs::copy(originalDLLpath, copyDLLpath, fs::copy_options::overwrite_existing);
    }

    auto lastModifiedTime = std::filesystem::last_write_time(originalDLLpath);

    HINSTANCE engineLibrary = LoadLibraryA(copyDLLpath.c_str());
    if (!engineLibrary) {
        std::cerr << "library couldn't be loaded\n";
        return -1;
    }
    
    FnEnginelib  enginefunction = (FnEnginelib)GetProcAddress(engineLibrary, "fnenginelib");

    if (!enginefunction) {
        std::cerr << "Unable to find fnenginelib" << std::endl;
        FreeLibrary(engineLibrary);
        return -1;
    }

    enginefunction();
}
