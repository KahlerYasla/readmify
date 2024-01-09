#ifndef COLORED_OUTPUT_H
#define COLORED_OUTPUT_H

#include <iostream>
#include <string>
#include <map>

// Map of colors
std::map<std::string, std::string> colorMap = {
    {"red", "\033[31m"},
    {"green", "\033[32m"},
    {"blue", "\033[34m"},
    {"yellow", "\033[33m"},
    {"magenta", "\033[35m"},
    {"cyan", "\033[36m"},
    {"white", "\033[37m"},
    //================================================================================
    {"reset", "\033[0m"},
    {"bold", "\033[1m"},
    {"dim", "\033[2m"},
    {"italic", "\033[3m"},
    {"underline", "\033[4m"},
    {"blink", "\033[5m"},
    {"reverse", "\033[7m"},
    {"hidden", "\033[8m"},
    {"black", "\033[30m"},
    //================================================================================
    {"bgred", "\033[41m"},
    {"bggreen", "\033[42m"},
    {"bgyellow", "\033[43m"},
    {"bgblue", "\033[44m"},
    {"bgmagenta", "\033[45m"},
    {"bgcyan", "\033[46m"},
    {"bgwhite", "\033[47m"},
    {"bgblack", "\033[40m"},
    {"bgreset", "\033[49m"},
    {"bglightgrey", "\033[47m"},
    {"bgdarkgrey", "\033[100m"},
    {"bglightred", "\033[101m"},
    {"bglightgreen", "\033[102m"},
    {"bglightyellow", "\033[103m"},
    {"bglightblue", "\033[104m"},
    {"bglightmagenta", "\033[105m"},
    {"bglightcyan", "\033[106m"},
    {"bglightwhite", "\033[107m"},
    {"bglightreset", "\033[49m"},
    {"bgdarkreset", "\033[49m"},
    {"bgdarkred", "\033[41m"},
    {"bgdarkgreen", "\033[42m"},
    {"bgdarkyellow", "\033[43m"},
    {"bgdarkblue", "\033[44m"},
    {"bgdarkmagenta", "\033[45m"},
    {"bgdarkcyan", "\033[46m"},
    {"bgdarkwhite", "\033[47m"},
    {"bgdarkgrey", "\033[100m"},
    {"bgdarklightred", "\033[101m"},
    {"bgdarklightgreen", "\033[102m"},
    {"bgdarklightyellow", "\033[103m"},
};

class ColoredOutputUtil
{
public:
    static void printColored(const std::string color, const std::string str)
    {
        std::cout << colorMap[color] << str << "\033[0m";
    }
};

#endif // COLORED_OUTPUT_H
