#pragma once

#include <map>
#include <string>

const std::map<std::string, std::string> colorMap = {
    {"red", "\033[1;31m"},
    {"green", "\033[1;32m"},
    {"yellow", "\033[1;33m"},
    {"blue", "\033[1;34m"},
    {"magenta", "\033[1;35m"},
    {"cyan", "\033[1;36m"},
    {"white", "\033[1;37m"},
    {"reset", "\033[0m"},
};