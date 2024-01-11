#pragma once

#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>

struct ProjectPrimitiveData
{
    std::string projectName = "Error";        // to store the name of the target project
    std::string projectDescription = "Error"; // to store the description of the target project
    std::string projectLanguage = "Error";    // to store the language of the target project
};
extern ProjectPrimitiveData projectPrimitiveData; // to store the primitive data of the target project
//===================================================================================
struct ProjectStructureTreeNode // to store a project file or folder in a tree
{
    std::string name;
    std::string fileType;
    std::string description;
    std::vector<ProjectStructureTreeNode> children;
};
extern ProjectStructureTreeNode projectStructureTree; // to store the structure of the target project in a tree
//===================================================================================
template <typename T>
extern std::unordered_map<T, std::unordered_set<T>> dependenciesGraph; // to store the dependencies of the target project in a graph
//===================================================================================
struct FunctionData // to store the data of a function in the target project
{
    std::string description;
    std::string function;
    std::string location;
    std::string returnType;
    std::vector<std::pair<std::string, std::string>> inputParameters;
    std::pair<std::string, std::string> output;
};
extern std::unordered_map<std::string, FunctionData> projectFunctionsDataMap; // to store the data of all the functions in the target project
//===================================================================================
