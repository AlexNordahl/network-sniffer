#include "readable_protocols.h"

std::string protocolKeyword(const int decimal)
{
    switch (decimal)
    {
    case 1: return "ICMP";
    case 2: return "IGMP";
    case 4: return "IPV4";
    case 6: return "TCP";
    case 17: return "UDP";
    case 41: return "IPV6";
    case 47: return "GRE";
    case 50: return "ESP";
    case 51: return "AH";
    case 89: return "OSPF";
    default: return "?";
    }
}

std::string tcpFlags(const unsigned long long decimal, const std::string& separator)
{
    const std::bitset<8> bset {decimal};
    const std::array<std::string, 8> flags {
        "FIN", "SYN", "RST", "PSH",
        "ACK", "URG", "ECE", "CWR"
    };
    
    std::string result {};
    for (size_t i = 0; i < 8; ++i)
    {
        if (bset[i])
        {
            if (!result.empty())
                result += separator;
            result += flags[i];
        }
    }

    return result;
}

std::string dnsFlags(const unsigned long long decimal, const std::string& separator)
{
    const std::bitset<16> bset {decimal};
    std::string result {};

    const std::array<std::string, 7> opcode {
        "QUERY", "IQUERY", "STATUS", "",
        "NOTIFY", "UPDATE", "DSO"
    };

    const std::array<std::string, 6> rcode {
        "NOERROR", "FORMERR", "SERVFAIL", 
        "NXDOMAIN", "NOTIMP", "REFUSED"
    };

    result += bset[15] == 0 ? "QUERY" : "RESP";

    const auto flags = static_cast<uint16_t>(decimal);
    const uint16_t opcodeVal = (flags >> 11) & 0xF;
    result += separator + "OPCODE=" + opcode[opcodeVal];
 
    if (bset[10]) result += separator + "AA";
    if (bset[9])  result += separator + "TC";
    if (bset[8])  result += separator + "RD";
    if (bset[7])  result += separator + "RA";
    if (bset[6])  result += separator + "Z";
    if (bset[5])  result += separator + "AD";
    if (bset[4])  result += separator + "CD";

    const uint16_t rcodeVal = flags & 0xF;
    result += separator + "RCODE=" + rcode[rcodeVal];

    return result;
}