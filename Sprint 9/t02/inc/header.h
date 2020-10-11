#ifndef TAPOK
#define TAPOK

#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

bool mx_isspace(char);
void mx_printstr(const char *);
void mx_printchar(char);
void mx_printint(int);
char *mx_strcpy(char *, const char *);
int mx_strlen(const char *);
bool mx_isdigit(int);
int mx_atoi(const char *);

#endif
