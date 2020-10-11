#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *mx_strnew(const int size) 
{
    char *memory = NULL;
    int i = 0;
    if (size < 0)
        return NULL;
    memory = (char *)malloc((size + 1));
    while (i < size) {
        memory[i] = '\0';
        i++;
    }
    memory[i] = '\0';
    return memory;
}
int mx_strlen(const char *s) {
    int i = 0;
    
    if (!s)
        return 0;
    while (s[i])
        i++;
    return i;
}

char *mx_strcpy(char *dst, const char *src) {
    int i = 0;
    
    while (src[i]) {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return dst;
}

char *mx_strdup(const char *s1){
    char *duplicate = mx_strnew(mx_strlen(s1));
    
    mx_strcpy(duplicate, s1);
    return duplicate;
}
