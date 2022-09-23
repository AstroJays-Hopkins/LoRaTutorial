typedef struct {
    char header = 0x55;
} __attribute__((packed)) Packet;

void cast_char_to_packet(uint8_t  * buffer, Packet * packet);

void cast_packet_to_char( Packet * packet, uint8_t  * buffer);

void cast_char_to_lora_data(char * data, uint8_t * buffer);