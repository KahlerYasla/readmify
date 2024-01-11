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
    {"orange", "\033[38;5;208m"},
    {"reset", "\033[0m"},
    // backgrounded colors
    {"bgRed", "\033[41m"},
    {"bgGreen", "\033[42m"},
    {"bgYellow", "\033[43m"},
    {"bgBlue", "\033[44m"},
    {"bgMagenta", "\033[45m"},
    {"bgCyan", "\033[46m"},
    {"bgWhite", "\033[47m"},
    {"bgOrange", "\033[48;5;208m"},
    {"bgReset", "\033[49m"},
};