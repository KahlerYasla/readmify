#pragma once

#include <iostream>
#include <filesystem>
#include <map>
#include <vector>
#include <fstream>
#include <sstream>

#include "ProjectData.h"

class Extractors
{
public:
    static ProjectPrimitiveData extractProjectPrimitives(float *progress);
    static ProjectStructureTreeNode extractProjectStructure(float *progress);

private:
    static std::string getCurrentDirectoryName();
    static std::string findMostUsedLanguage();
    static std::string getProjectDescription(int port);
};