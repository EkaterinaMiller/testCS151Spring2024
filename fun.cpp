#include "fun.h"

std::string getName()
{
    std::cout<<"Please enter your name: ";
    std::string name;
    getline(std::cin, name);
    return name;
}