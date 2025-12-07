#ifndef READABLE_PROTOCOLS_H
#define READABLE_PROTOCOLS_H

#include <bitset>
#include <array>
#include <arpa/inet.h>

std::string protocolKeyword(const int decimal);
std::string tcpFlags(const unsigned long long decimal, const std::string& separator);
std::string dnsFlags(const unsigned long long decimal, const std::string& separator);

#endif