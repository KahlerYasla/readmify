#include <thread>
#include <iostream>
#include <sys/stat.h>
#include <unistd.h>
#include <string>
#include <fstream>

#include "Extractors.h"
#include "Interface.h"

static float *progress = new float(0.0);
static Interface interface;

void displayInterface();
void generateReadme();

inline bool existsTest(const std::string &name);

//====================================================================================================
int main()
{
    // Main threads
    std::thread cliThread(displayInterface);
    std::thread generateReadmeThread(generateReadme);

    // Joining the threads to wait for them to finish
    cliThread.join();
    generateReadmeThread.join();

#pragma region Results == == == == == == == == == == == == == == == == == == == == == == == == == == == ==
    printDivider();

    // Print the projectData for last time if user wants to check
    interface.displayResult();

    printDivider();
    if (existsTest("README.md"))
    {
        printColored("green", "README.md generated successfully!");
    }
    else
    {
        printColored("red", "README.md generation failed!");
    }
#pragma endregion == == == == == == == == == == == == == == == == == == == == == == == == == == == ==

    printColored("", "\n\n");

    return 0;
}
//====================================================================================================

#pragma region Thread functions == == == == == == == == == == == == == == == == == == == == == == == == == == == ==
void displayInterface()
{
    interface.displayCLI();

    while (*progress < 100.0)
    {
        interface.updateLoadingBar(*progress);
    }

    interface.updateLoadingBar(100.0);

    std::cout << "\e[?25h";
    std::cout.flush();
}
//----------------------------------------------------------------------------------------------------
void generateReadme()
{
#pragma region Extraction of data-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --
    // Extract the project primitives
    // projectPrimitiveData = Extractors::extractProjectPrimitives(progress);

    // Extract the project structure tree
    // projectStructureTree = Extractors::extractProjectStructure(progress);
#pragma endregion-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -

    // Generate the README.md file from the extracted data
}
#pragma endregion == == == == == == == == == == == == == == == == == == == == == == == == == == == ==
//====================================================================================================
#pragma region Functions == == == == == == == == == == == == == == == == == == == == == == == == == == == ==
inline bool existsTest(const std::string &name) // inline is used to avoid multiple definition error and performance boost
{
    struct stat buffer;
    return (stat(name.c_str(), &buffer) == 0);
}
#pragma endregion == == == == == == == == == == == == == == == == == == == == == == == == == == == ==