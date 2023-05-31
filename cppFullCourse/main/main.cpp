#include <iostream>
#include <cmath>
#include <string>
#include "myLibrary.hpp"


int main()
{
    std::string name;
    
    std::cout << "Enter your name" << std::endl;
    
    getline(std::cin >> std::ws,name);
    
    std::cout << "Lenght: " << name.length() << std::endl;
    std::cout << "is empty: " << name.empty() << std::endl;
    
    
    name.clear();
    std::cout << "is empty: " << name.empty() << std::endl;
    
    return 0;
}
