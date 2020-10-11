#include "create_new_agent.h"

char *mx_strnew(const int size) {
    if (size < 0) return NULL;
    char *arr = (char *)malloc(size + 1);
    for (int i = 0; i <= size; i++)
        arr[i] = '\0';
    return arr;
}

