#include "Interface.h"

Interface::Interface()
{
    // Constructor
    std::cout << "Interface object created" << std::endl;
}

void Interface::displayMenu()
{
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "|               Readmify                |" << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::string number;
    std::cout << "Enter your number: ";
    std::getline(std::cin, number);

    std::string gender;
    std::cout << "Enter your gender: ";
    std::getline(std::cin, gender);

    std::cout << "----------------------------------------" << std::endl;
    std::cout << "|               Summary                 |" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Number: " << number << std::endl;
    std::cout << "Gender: " << gender << std::endl;
    std::cout << "----------------------------------------" << std::endl;
}