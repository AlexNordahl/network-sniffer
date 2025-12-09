#ifndef READABLE_PROTOCOLS_H
#define READABLE_PROTOCOLS_H

#include <string>
#include <vector>
#include <bitset>
#include <array>
#include <arpa/inet.h>

std::string protocolKeyword(const int decimal);
std::string arpOperation(const int decimal);
std::vector<std::string> tcpFlags(const unsigned long long decimal);
std::vector<std::string> dnsFlags(const unsigned long long decimal);

#endif