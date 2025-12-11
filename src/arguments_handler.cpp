#include "arguments_handler.h"

std::optional<std::string> selectDeviceArgument(int argc, char const *argv[])
{
    if (argc == 1)
        return std::nullopt;

    for (int i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "-d") == 0 or strcmp(argv[i], "--device") == 0)
        {
            return argv[i + 1];
        }
    }

    return std::nullopt;
}

bool listDevicesArgument(int argc, char const *argv[])
{
    if (argc == 1)
    return false;
    
    for (int i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "-l") == 0 or strcmp(argv[i], "--list") == 0)
        {
            return true;
        }
    }
    
    return false;
}

std::optional<std::string> filterArgument(int argc, char const *argv[])
{
    if (argc == 1)
        return std::nullopt;

    for (int i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "-f") == 0 or strcmp(argv[i], "--filter") == 0)
        {
            return argv[i + 1];
        }
    }

    return std::nullopt;
}