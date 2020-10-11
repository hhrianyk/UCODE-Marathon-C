#include <stdio.h>
#include <stdlib.h>

char* mx_strcpy(char* dst, const char* src) {
    int count = 0;
    while(*src) {
        *dst++ = *src++;
        count++;
    }
    dst -= count;
    return dst;
}

int mx_strlen(const char *s) {
	return (*s) ? mx_strlen(++s) + 1 : 0;
}

char *mx_strnew(const int size) {
    if (size < 0) return NULL;
    char *arr = (char *)malloc(size + 1);
    for (int i = 0; i <= size; i++)
        arr[i] = '\0';
    return arr;
}

char *mx_strdup(const char *str) {
    if (str == NULL) return NULL;   
    char *dst = mx_strnew(mx_strlen(str));  
    mx_strcpy(dst, str);                      
    return dst;
}

