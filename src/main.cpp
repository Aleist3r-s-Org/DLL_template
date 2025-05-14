#include "main.hpp"

#include <iostream>

// ptrArray is storing pointers to various global variables
// for example ptrArray[0] is a pointer to std::vector<std::string> g_cmdLineArgs;
// documentation will exist in the future when all pointers are done
int CustomExtensions(uint64_t *ptrArray)
{
    std::cout << "Hello from CustomExtensions.dll\n";
    return 0;
}
