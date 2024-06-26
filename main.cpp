#include "Tests/iostream.h"
#include "Tests/filesystem.h"
#include <iostream>

int main()
{
    std::cout << " -- IO Stream tests -- " << std::endl; 
    iostream();

    std::cout << "-- Filesystem Tests -- " << std::endl;
    filesystem();

}