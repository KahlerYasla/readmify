#pragma once

#include <iostream>
#include <string>

#include "ColorMap.h"

static void printColored(const std::string color, const std::string str)
{
    if (color == "")
    {
        std::cout << str;
        return;
    }

    std::cout << colorMap.at(color) << str << colorMap.at("reset");
}
