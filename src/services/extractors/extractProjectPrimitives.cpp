#include "Extractors.h"
#include <thread>

ProjectPrimitiveData Extractors::extractProjectPrimitives(float *progress)
{
    ProjectPrimitiveData projectData;

    // 1. Find the current directory's name and set it to project name
    projectData.projectName = getCurrentDirectoryName();
    *progress += 3;

    // 2. Find the most used programming language from analyses of subdirectories
    projectData.projectLanguage = findMostUsedLanguage();
    *progress += 3;

    // 3. Take the quote of the day from the specified port and set it to project description
    projectData.projectDescription = getProjectDescription(17); // Replace with the actual port number
    *progress += 3;

    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    return projectData;
}

std::string Extractors::getCurrentDirectoryName()
{
    std::__fs::filesystem::path currentPath = std::__fs::filesystem::current_path();
    std::string currentDirectoryName = currentPath.filename().string();
    return currentDirectoryName;
};

std::string Extractors::findMostUsedLanguage()
{
    // iterate through all the subdirectories recursively and count the number of files of each language
    std::map<std::string, int> languageCountMap;

    for (const auto &entry : std::__fs::filesystem::recursive_directory_iterator(std::__fs::filesystem::path(".")))
    {
        if (entry.is_directory())
        {
            continue;
        }

        std::string filePath = entry.path().string();
        std::string fileExtension = filePath.substr(filePath.find_last_of(".") + 1);

        // if extension's first character is /, then it is not a file extension so continue
        if (fileExtension[0] == '/')
        {
            continue;
        }

        if (languageCountMap.find(fileExtension) == languageCountMap.end())
        {
            languageCountMap[fileExtension] = 1;
        }
        else
        {
            languageCountMap[fileExtension]++;
        }
    }

    // find the language with the highest count
    std::string mostUsedLanguage = "";
    int maxCount = 0;

    for (auto const &languageCountPair : languageCountMap)
    {
        if (languageCountPair.second > maxCount)
        {
            mostUsedLanguage = languageCountPair.first;
            maxCount = languageCountPair.second;
        }
    }

    return mostUsedLanguage;
};

std::string Extractors::getProjectDescription(int port)
{
    std::string quote = "This is a quote of the day"; // Replace with the actual quote of the day
    return quote;
};
