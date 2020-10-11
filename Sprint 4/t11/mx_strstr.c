#include <stdio.h>

int mx_strncmp(const char *, const char *, int);
int mx_strlen(const char *);
char *mx_strchr(const char *, int );

char *mx_strstr(const char *s1, const char *s2) {
    const char *p = s1;

    while (mx_strchr(p, s2[0]) != NULL) {
        p = mx_strchr(p, s2[0]);

        if (!mx_strncmp(p, s2, mx_strlen(s2)))
            return (char *) p;
        else 
            p++;
    }

    return NULL;
}
