#include "Interface.h"

Interface::Interface()
{
    // Empty constructor
}

void Interface::displayCLI()
{
    std::string projectName = "${projectName}";

    printColored("red", "\nReadmify - A tool to generate Readme.md file for your project | github.com/KahlerYasla | ✈▐▐");

    printDivider();

    std::string pathOfReadme = projectName + "/Readme.md";

    printColored("orange", "Your Readme.md file will be generated at: " + pathOfReadme);

    printDivider();
}

void Interface::displayResult()
{
    // Project primitives
    printColored("bgOrange", "Project primitives:\n");

    std::string projectName = projectPrimitiveData.projectName;
    std::string projectDescription = projectPrimitiveData.projectDescription;
    std::string projectLanguage = projectPrimitiveData.projectLanguage;

    printColored("orange", "Project name: " + projectName + "\n");
    printColored("orange", "Project description: " + projectDescription + "\n");
    printColored("orange", "Project language: " + projectLanguage);

    printDivider();

    // Project structure
}

void Interface::updateLoadingBar(float progress)
{
    loadingBar.displayLoadingBar(100, progress);
}
