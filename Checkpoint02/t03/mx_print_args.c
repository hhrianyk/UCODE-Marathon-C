#include <unistd.h>

unsigned long mx_strlen(const char *s) {
	unsigned long i = 0;
	for (; s[i] != '\0'; i++) {}
	return i;
}

void mx_printchar(char c) {
    write(1, &c, 1);
}


void mx_printstr(const char *s) {
	write(1, s, mx_strlen(s));
}

int main(int argc, char* argv[])
{
	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			mx_printstr(argv[i]);
			mx_printchar('\n');
		}
	}
	return 0;
}

