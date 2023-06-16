#include <stdint.h>
#include <stdio.h>

#define MAX_PACKET_DATA_LENGTH (50)

typedef struct data_packet_t {
    uint8_t id;
    uint8_t data_length;
    uint8_t data[MAX_PACKET_DATA_LENGTH];
    uint8_t checksum;
} data_packet_t;

int isPacketCorrupted(data_packet_t* packet) {
    uint8_t calculatedChecksum = 0;
    
    for (int i = 0; i < packet->data_length; i++) {
        calculatedChecksum += packet->data[i];
    }
    
    if (calculatedChecksum != packet->checksum) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    data_packet_t packet;
    packet.id = 1;
    packet.data_length = 4;
    packet.data[0] = 10;
    packet.data[1] = 20;
    packet.data[2] = 30;
    packet.data[3] = 40;
    packet.checksum = 100;
    
    if (isPacketCorrupted(&packet)) {
        printf("Packet is corrupted\n");
    } else {
        printf("Packet is not corrupted\n");
    }
    
    return 0;
}


