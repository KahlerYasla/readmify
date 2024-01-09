#include "LoadingBar.h"

void LoadingBar::showLoadingBar(int total, int progress)
{
    const int barWidth = 80;
    float percentage = static_cast<float>(progress) / total;
    int filledWidth = static_cast<int>(barWidth * percentage);

    std::cout << "[";
    for (int i = 0; i < barWidth; ++i)
    {
        if (i < filledWidth)
        {
            std::cout << "=";
        }
        else
        {
            std::cout << " ";
        }
    }
    std::cout << "] " << static_cast<int>(percentage * 100.0) << "%\r";
    std::cout.flush();
}
