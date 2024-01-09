#include "Interface.h"
#include "ColoredOutputUtil.h"
#include "LoadingBar.h"

Interface::Interface()
{
    // Empty constructor
}

void Interface::displayStart()
{
    std::string projectName;

    printColored("magenta", "Readmify - A tool to generate Readme.md file for your project | github.com/KahlerYasla");

    std::cout << std::endl;

    LoadingBar loadingBar;

    // progress of loading bar
    int progress = 0;

    // total number of steps
    int total = 100;

    while (progress < total)
    {
        loadingBar.showLoadingBar(total, progress);
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        ++progress;
    }

    std::cout << std::endl;

    printColored("green", "Your Readme.md file has been generated successfully!");
}