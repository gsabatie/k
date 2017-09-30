#include "io.h"

void initSerial() {
    const u16 COM1 = 0x3f8;
    outb(COM1 + 3, 1);
    outb(COM1, 0x03);
    outb(COM1, 0x00);
    outb(COM1 + 3, 0);
}