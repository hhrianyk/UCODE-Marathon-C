#include "mx_printchar.c"

void mx_only_printable(void) {
	for (short i = 127; i > 32; i--) {
		char c = i;
		mx_printchar(c);
	}
}
