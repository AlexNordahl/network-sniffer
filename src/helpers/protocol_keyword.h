#ifndef READABLE_PROTOCOLS_H
#define READABLE_PROTOCOLS_H

namespace protocol
{
    std::string toKeyword(const int decimal)
    {
        switch (decimal)
        {
        case 1:
            return "ICMP";
        case 2:
            return "IGMP";
        case 4:
            return "IPV4";
        case 6:
            return "TCP";
        case 17:
            return "UDP";
        case 41:
            return "IPV6";
        case 47:
            return "GRE";
        case 50:
            return "ESP";
        case 51:
            return "AH";
        case 89:
            return "OSPF";
        default:
            return "?";
        }
    }
}

#endif