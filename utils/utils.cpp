void cast_data_to_packet(uint8_t * buffer, Packet * packet){
    packet = (Packet *) buffer;
}

void cast_packet_to_data(Packet * packet, uint8_t * buffer){
    buffer = (uint8_t *) packet;
}