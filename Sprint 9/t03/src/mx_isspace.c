#include <stdbool.h>
#include ".../inc/header.h>"
bool mx_isspace(int);

bool mx_isspace(int c)
{
	bool a = false;
	if(c == 32 || ( c >= 9 && c <= 13)) { a = true; }
	else { a = false; }
	return a; 
}
