#include "Interface.h"

extern ProjectPrimitiveData g_projectPrimitiveData;
extern ProjectStructureTree g_projectStructureTree;

Interface::Interface()
{
    // Empty constructor
}
//----------------------------------------------------------------------------------------------
void Interface::displayCLI()
{
    std::string projectName = "${projectName}";

    printColored("red", "\nReadmify - A tool to generate Readme.md file for your project | github.com/KahlerYasla | ✈▐▐");

    printDivider();

    std::string pathOfReadme = projectName + "/Readme.md";

    printColored("orange", "Your Readme.md file will be generated at: " + pathOfReadme + " (root directory of your project)");

    printDivider();
}
//----------------------------------------------------------------------------------------------
void Interface::displayResult()
{
    // Project primitives
    printColored("bgOrange", "Project primitives:\n");

    std::string projectName = g_projectPrimitiveData.projectName;
    std::string projectDescription = g_projectPrimitiveData.projectDescription;
    std::string projectLanguage = g_projectPrimitiveData.projectLanguage;

    printColored("orange", "Project name: " + projectName + "\n");
    printColored("orange", "Project description: " + projectDescription + "\n");
    printColored("orange", "Project language: " + projectLanguage);

    printDivider();

    // Project structure
    printColored("bgOrange", "Project structure:\n");
}
//----------------------------------------------------------------------------------------------
void Interface::updateLoadingBar(float progress)
{
    loadingBar.displayLoadingBar(100, progress);
}
