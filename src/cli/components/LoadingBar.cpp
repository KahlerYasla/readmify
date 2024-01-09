#include "LoadingBar.h"

void LoadingBar::displayLoadingBar(int total, int progress)
{
    const int barWidth = 90;
    float percentage = static_cast<float>(progress) / total;
    int filledWidth = static_cast<int>(barWidth * percentage);

    for (int i = 0; i < barWidth; ++i)
    {
        if (i < filledWidth)
        {
            printColored("blue", "█");
        }
        else
        {
            printColored("blue", "░");
        }
    }

    std::cout << " ";
    printColored("", std::to_string(static_cast<int>(percentage * 100.0)) + "%");

    // clean the line
    std::cout << "\r";
    std::cout.flush();

    // do not show cursor
    std::cout << "\e[?25l";
}
