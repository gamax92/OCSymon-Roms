#ifndef _ACIAIO_H
#define _ACIAIO_H

#include <peekpoke.h>
#include "../common/addresses.h"

void putchar(char character) {
	POKE(ACIA_BASE, character);
	while ((PEEK(ACIA_BASE+1)&0x10)==0);
}

#endif
