#include 
#include 

union NetworkPacket {
    struct IPv4 {
        std::array sourceIP;
        std::array destIP;
    } ipv4;
    
    struct IPv6 {
        std::array sourceIP;
        std::array destIP;
    } ipv6;
    
    uint8_t version;
};

void printPacket(const NetworkPacket& packet) {
    if (packet.version == 4) {
        // Print IPv4 details
    } else if (packet.version == 6) {
        // Print IPv6 details
    }
}