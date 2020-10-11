#include "mx_printchar.c"

void mx_hexadecimal(void) {
	char c;
	for (short int i = 0; i < 16; i++) {

		if (i < 10) c = i + 48;
		else c = i + 55;
		mx_printchar(c);
		mx_printchar(' ');

	}
	mx_printchar('\n');
}
