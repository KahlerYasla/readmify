#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>

const struct ProjectStructureTreeNode // to store the project structure in a tree
{
    std::string name;
    std::string fileType;
    std::string description;
    std::vector<ProjectStructureTreeNode> children;
};
//===================================================================================
template <typename T>
const std::unordered_map<T, std::unordered_set<T>> Dependencies; // to store the dependencies of the project recursively
//===================================================================================
const struct FunctionData
{
    std::string description;
    std::string function;
    std::string location;
    std::string returnType;
    std::vector<std::pair<std::string, std::string>> inputParameters;
    std::pair<std::string, std::string> output;
};

const std::unordered_map<std::string, FunctionData> FunctionDataMap;
