#ifndef ARGUMENTS_HANDLER_H
#define ARGUMENTS_HANDLER_H

#include <string>
#include <optional>
#include <cstring>

bool listDevicesArgument(int argc, char const *argv[]);
std::optional<std::string> selectDeviceArgument(int argc, char const *argv[]);
std::optional<std::string> filterArgument(int argc, char const* argv[]);

#endif