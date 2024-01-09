#include <thread>
#include <iostream>
#include <fstream>

#include "Interface.h"

static float progress = 0.0;
static Interface interface;

void displayInterface();
void generateReadme();

int main()
{
    // Main threads
    std::thread cliThread(displayInterface);
    std::thread generateReadmeThread(generateReadme);

    // Joining the threads to wait for it to finish

    cliThread.join();
    generateReadmeThread.join();

    std::ofstream readmeFile;
    try
    {
        // try to ping the file that is located at the root of the project
        readmeFile.open("Readme.md");
        printColored("", "••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••\n");
        interface.printResult("Readme.md file generated successfully!\n\n");
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}

void displayInterface()
{
    interface.displayCLI();

    while (progress < 100.0)
    {
        interface.updateLoadingBar(progress);
    }

    interface.updateLoadingBar(100.0);

    std::cout << "\e[?25h";
    std::cout << "\n";
    std::cout.flush();
}

void generateReadme()
{
    while (progress < 100.0)
    {
        progress += 0.005;
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }
}
