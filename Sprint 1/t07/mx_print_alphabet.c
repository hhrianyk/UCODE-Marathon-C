#include "mx_printchar.c"

void mx_print_alphabet(void) {
	int j = 98;
	for (short i = 65; i < 91; i = i + 2)
	{
		char c = i;
		mx_printchar(c);
		mx_printchar(' ');
		c = j;
		mx_printchar(c);
		mx_printchar(' ');
		j = j + 2;
	}mx_printchar('\n');
}
