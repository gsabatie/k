#include <stddef.h>
#include <stdbool.h>
#include "../../k/io.h"

int write(const char *s, size_t nb) {

    // si le dlab est a 0    on peut ecrire 
    const u16 COM1 = 0x3f8;
    for(size_t i = 0; i < nb; i++) {
        outb(COM1, s[i]);
    }
    
    return nb;
}