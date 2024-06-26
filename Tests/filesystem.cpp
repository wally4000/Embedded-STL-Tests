#include <filesystem>
#include <iostream>
#include <fstream>

void filesystem()
{
// Set some path variables for testing
std::filesystem::path stl_test("stl_test");
const std::filesystem::path one("one");
const std::filesystem::path two("two");
std::cout << "Joining Paths: stl_test/one/two" << std::endl;
stl_test /= one;
stl_test /= two;


std::cout << "Creating Directories and add some random text documents:" << std::endl;
std::filesystem::create_directory("outsider");
std::filesystem::create_directories(stl_test);
std::ofstream{"stl_test/horses.txt"};
std::ofstream("stl_test/one/cows.txt");


std::cout << "Iterating over Directories: " << std::endl;
for (auto const& dir_entry : std::filesystem::directory_iterator{"stl_test"})
    std::cout << dir_entry.path() << std::endl;

std::cout << "Iterating over Directories Recursively: " << std::endl;
for (auto const& dir_entry : std::filesystem::recursive_directory_iterator{"stl_test"})
    std::cout << dir_entry.path() << std::endl;



}