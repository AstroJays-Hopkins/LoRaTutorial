#include <stdint.h>

void cast_char_to_packet(uint8_t  * buffer, void * packet);

void cast_packet_to_char(void * packet, uint8_t  * buffer);

void cast_char_to_lora_data(char * data, uint8_t * buffer);
