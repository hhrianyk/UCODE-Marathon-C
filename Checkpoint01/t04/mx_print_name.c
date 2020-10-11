#include <unistd.h>

unsigned long mx_strlen(const char *s) {
	unsigned long i = 0;
	for (; s[i] != '\0'; i++);
	return i;
}

void mx_printchar(char c) {
    write(1, &c, 1);
}

void mx_printint(int n) {
	if (n < 0) {
		n = -n;
		mx_printchar('-');
	}
	char arr[11];
	short i = 0;
	for (; n != 0; n /= 10, i++)
		arr[i] = (char)(n % 10) + 48;
	for (; i >= 0; i--)
		mx_printchar(arr[i]);
}

int main(int argc, char const *argv[]) {
	write(1, argv[0], mx_strlen(argv[0]));
	mx_printchar('\n');
	mx_printint(argc);
	mx_printchar('\n');
	return 0;
}
