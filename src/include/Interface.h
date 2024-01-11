#pragma once

#include <iostream>
#include <string>

#include "ProjectData.h"
#include "LoadingBar.h"
#include "Divider.h"

class Interface
{
public:
    LoadingBar loadingBar;

    Interface();

    void displayCLI();
    void displayResult();

    void updateLoadingBar(float progress);
};
