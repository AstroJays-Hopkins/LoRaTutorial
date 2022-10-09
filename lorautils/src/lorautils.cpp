#include "lorautils.h"

void cast_data_to_packet(uint8_t * buffer, void * packet){
    packet = (void *) buffer;
}

void cast_packet_to_data(void * packet, uint8_t * buffer){
    buffer = (uint8_t *) packet;
}

void cast_char_to_lora_data(char * data, uint8_t * buffer){
    buffer = (uint8_t *) data;
}
