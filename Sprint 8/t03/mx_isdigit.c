#include "hex_to_nbr.h"

bool mx_isdigit(int c)
{
	bool a = false;
	if(c >= 48 && c <= 57) { a = true; }
	else { a = false; }
	return a; 
}
