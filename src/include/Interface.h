#pragma once

#include <iostream>
#include <string>

#include "LoadingBar.h"

class Interface
{
public:
    LoadingBar loadingBar;

    Interface();

    void displayCLI();
    void updateLoadingBar(float progress);
    void printResult(std::string result);
};
