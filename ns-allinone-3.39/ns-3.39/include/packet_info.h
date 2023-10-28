//
// Created by Stian Sundkvist on 29/09/2023.
//

#ifndef NS3_PACKET_INFO_H
#define NS3_PACKET_INFO_H

//47, 24, 16, 12
#define RATES_100MB {45, 20, 15, 10}
#define RATES_1GB {400, 260, 160, 160}

typedef struct packet_info {
    uint32_t heading_s;
    uint32_t trailing_s;
    uint32_t cross_traffic_s;
    uint16_t link_cap;
} packet_info;

#endif //NS3_PACKET_INFO_H
