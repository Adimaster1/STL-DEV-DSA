#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<std::string> stooges {"xyz", "abc", "def"};

// Read-only, no copies
for (auto const &str : stooges)
    std::cout << str << std::endl;

// Makes a copy of each string
for (auto str : stooges)
    std::cout << str << std::endl;

// Direct reference, can modify original elements
for (auto &str : stooges)
    str += "!";

// Makes a copy of each string, but prevents modification of the copy
for (const auto str : stooges)
    std::cout << str << std::endl;

    return 0;
}