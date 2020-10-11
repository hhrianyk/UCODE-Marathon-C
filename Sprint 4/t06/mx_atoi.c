#include <stdbool.h>

bool mx_isdigit(int);
bool mx_isspace(char);

int mx_atoi(const char *str) {
    bool cont = true;
    bool minus = false;
    int num = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (!mx_isspace(str[i])) {
            if (!mx_isdigit(str[i])) {
                if (str[i] == '-' && mx_isdigit(str[i + 1])) 
                    minus = true;
                else
                    break;
            }
            else {
                num = num * 10 + (int)str[i] - 48;
                cont = false;
            }
        }
        else
            if (!cont)
                break;
    }

    return minus ? -num : num;
}
