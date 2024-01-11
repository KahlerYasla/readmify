#pragma once

#include <iostream>
#include <chrono>
#include <thread>

#include "ColoredOutputUtil.h"

class LoadingBar
{
public:
    void displayLoadingBar(int total, int progress);
};