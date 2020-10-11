#include <unistd.h>

void mx_only_printable(void) {
	for (short i = 127; i > 31; i--) {
		char c = i;
		 write(1, &c, 1);
	}
	write(1, "\n", 1);
}

