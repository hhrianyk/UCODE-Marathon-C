char *mx_strcpy(char*, const char*);

char *mx_strcpy(char *dst, const char *src)
{
	char *tmp = dst;
	while(*dst != '\0' || *src != '\0')
	{
		*dst = *src;
		dst++, src++;
	}
	return tmp;
}
