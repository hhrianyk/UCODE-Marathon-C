char *mx_strncpy(char *dst, const char *src, int len) {
    for (int index = 0; index < len; index++) 
        dst[index] = src[index];

    return (char *) dst;
}
