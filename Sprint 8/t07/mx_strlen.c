#include "create_new_agent.h"

int mx_strlen(const char *s) {
    int counter = 0;
    while (*s++) {
        counter++;
    }
    return counter;
}
