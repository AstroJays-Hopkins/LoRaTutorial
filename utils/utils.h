typedef struct {
  
} __attribute__((packed)) Packet;

void cast_char_to_packet(uint8_t  * buffer, Packet * packet)
void cast_packet_to_char( Packet * packet, uint8_t  * buffer);
