#ifndef _sd_H_
#define _sd_H_
static uint16_t sd_w = 14;
static uint16_t sd_h = 16;
static uint32_t sd_i[6] = { 32, 64, 96, 128, 160, 192, };
static unsigned short sd_v[6] = { 0xd545, 0x41f, 0x18c3, 0x41f, 0x41f, 0x273, };
static unsigned short sd[224] = { // 14x16
0x0, 0x0, 0x0, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 0x0, 0x0, 0x0, 0x18c3, 0x273, 0xe670, 0x273, 0xe670, 0x273, 0xe670, 0x273, 0xe670, 0x273, 0x18c3, 0x0, 0x0, 0x18c3, 0xe670, 0x273, 0xd545, 0x41f, 0xd545, 0x41f, 0xd545, 0x41f, 0xd545, 0x41f, 0x18c3, 0x0, 0x18c3, 0x273, 0xd545, 0x41f, 0x273, 0x41f, 0x273, 0x41f, 0x273, 0x41f, 0x273, 0x41f, 0x18c3, 0x0, 0x18c3, 0x41f, 0x273, 0x41f, 0x41f, 0x41f, 0x41f, 0x41f, 
0x41f, 0x41f, 0x41f, 0x18c3, 0x18c3, 0x0, 0x18c3, 0x41f, 0x41f, 0x41f, 0x41f, 0x41f, 0x41f, 0x41f, 0x41f, 0x41f, 0x41f, 0x9cd3, 0x18c3, 0x0, 0x18c3, 0x41f, 0x41f, 0x41f, 0x273, 0x273, 0x41f, 0x273, 0x273, 0x41f, 0x41f, 0x9cd3, 0x18c3, 0x0, 0x18c3, 0x41f, 0x41f, 0x273, 0x41f, 0x41f, 0x41f, 0x273, 0x41f, 0x273, 0x41f, 0x18c3, 0x0, 0x0, 0x18c3, 0x41f, 0x41f, 0x273, 0x273, 0x273, 0x41f, 0x273, 0x41f, 0x273, 0x41f, 0x18c3, 0x0, 0x0, 0x18c3, 0x41f, 
0x41f, 0x41f, 0x41f, 0x273, 0x41f, 0x273, 0x41f, 0x273, 0x41f, 0x41f, 0x18c3, 0x0, 0x18c3, 0x41f, 0x41f, 0x273, 0x273, 0x41f, 0x41f, 0x273, 0x273, 0x41f, 0x41f, 0x41f, 0x18c3, 0x0, 0x18c3, 0x41f, 0x41f, 0x41f, 0x41f, 0x41f, 0x41f, 0x41f, 0x41f, 0x41f, 0x41f, 0x41f, 0x18c3, 0x0, 0x18c3, 0x41f, 0x41f, 0x41f, 0x41f, 0x41f, 0x41f, 0x41f, 0x41f, 0x41f, 0x41f, 0x41f, 0x18c3, 0x0, 0x18c3, 0x41f, 0x273, 0x273, 0x273, 0x273, 0x273, 0x273, 0x273, 0x273, 
0x273, 0x41f, 0x18c3, 0x0, 0x18c3, 0x41f, 0x273, 0x41f, 0x41f, 0x41f, 0x41f, 0x41f, 0x41f, 0x41f, 0x273, 0x41f, 0x18c3, 0x0, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 0x18c3, 0x0, 
};
#endif