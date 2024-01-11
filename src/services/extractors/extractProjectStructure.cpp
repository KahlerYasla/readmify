#include "../Extractors.h"

// Starting from the current directory, recursively iterate through all the subdirectories and files and store them in a tree
// All the files and folders are a node in the tree
ProjectStructureTree Extractors::extractProjectStructure(float *progress)
{
    ProjectStructureTree g_projectStructureTree;

    // 1. Find the current directory's name and set it's fields
    g_projectStructureTree.name = getCurrentDirectoryName();
    g_projectStructureTree.fileType = "folder";
    g_projectStructureTree.description = "This is the root folder of the project";

    *progress += 5;

    // 4. Iterate through all the subdirectories recursively and store them in the tree
    for (const auto &entry : std::__fs::filesystem::recursive_directory_iterator(std::__fs::filesystem::path(".")))
    {
        if (entry.is_directory())
        {
            ProjectStructureTree subdirectory;
            subdirectory.name = entry.path().filename().string();
            subdirectory.fileType = "folder";
            subdirectory.description = "This is a subdirectory";
            g_projectStructureTree.children.push_back(subdirectory);
        }
        else
        {
            ProjectStructureTree file;
            file.name = entry.path().filename().string();
            file.fileType = "file";
            file.description = "This is a file";
            g_projectStructureTree.children.push_back(file);
        }
    }

    return g_projectStructureTree;
}