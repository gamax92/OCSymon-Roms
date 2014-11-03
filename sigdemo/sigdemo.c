#include "../common/aciaio.h"

int main (void)
{
	while (1) {
		// Check for a signal.
		if (PEEK(SIGDEV_BASE) > 0) {
			putchar('S');
			putchar('i');
			putchar('g');
			putchar(' ');
			putchar('D');
			putchar('e');
			putchar('t');
			putchar('e');
			putchar('c');
			putchar('t');
			putchar('.');
			putchar(' ');
		}
	}
	return 0;
}
