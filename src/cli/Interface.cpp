#include "Interface.h"

Interface::Interface()
{
    // Empty constructor
}

void Interface::displayCLI()
{
    std::string projectName = "${projectName}";

    printColored("blue", "\nReadmify - A tool to generate Readme.md file for your project | github.com/KahlerYasla");

    printColored("", "\n••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••");

    std::string pathOfReadme = projectName + "/Readme.md";

    std::cout << "\nYour Readme.md file will be generated at " << pathOfReadme;

    printColored("", "\n••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••\n");
}

void Interface::updateLoadingBar(float progress)
{
    loadingBar.displayLoadingBar(100, progress);
}

void Interface::printResult(std::string result)
{
    printColored("blue", result);
}
