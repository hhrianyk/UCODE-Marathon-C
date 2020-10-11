#include <stdio.h>

int mx_strncmp(const char *, const char *, int);
int mx_strlen(const char *);
char *mx_strchr(const char *, int );
char *mx_strstr(const char *s1, const char *s2);

int mx_count_substr(const char *str, const char *sub) {
    int subs = 0;
    const char *p = str;

    if (!mx_strlen(sub))
        return 0;
    
    while (mx_strstr(p, sub) != NULL) {
        p = mx_strstr(p, sub);

        for (int i = 0; i < mx_strlen(sub); i++)
            p++;
        
        subs++;
    }

    return subs;
}
