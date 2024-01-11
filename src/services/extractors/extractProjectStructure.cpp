#include "../Extractors.h"

// Starting from the current directory, recursively iterate through all the subdirectories and files and store them in a tree
// All the files and folders are a node in the tree
ProjectStructureTreeNode Extractors::extractProjectStructure(float *progress)
{
    ProjectStructureTreeNode projectStructureTree;

    // 1. Find the current directory's name and set it's fields
    projectStructureTree.name = getCurrentDirectoryName();
    projectStructureTree.fileType = "folder";
    projectStructureTree.description = "This is the root folder of the project";

    *progress += 1;

    // 4. Iterate through all the subdirectories recursively and store them in the tree
    for (const auto &entry : std::__fs::filesystem::recursive_directory_iterator(std::__fs::filesystem::path(".")))
    {
        if (entry.is_directory())
        {
            ProjectStructureTreeNode subdirectory;
            subdirectory.name = entry.path().filename().string();
            subdirectory.fileType = "folder";
            subdirectory.description = "This is a subdirectory";
            projectStructureTree.children.push_back(subdirectory);
        }
        else
        {
            ProjectStructureTreeNode file;
            file.name = entry.path().filename().string();
            file.fileType = "file";
            file.description = "This is a file";
            projectStructureTree.children.push_back(file);
        }
    }

    return projectStructureTree;
}