void mx_printchar(char c);
void mx_str_separate(const char *str, char delim);
void mx_str_separate(const char *str, char delim) {
    int i = 0;
    int index;
    
    while (str[i] != '\0') {
        if (str[i] == delim) {
            index = i;
        }
        i++;
    }

    for (int j = index + 1; j < i; j++) {
        mx_printchar(str[j]);
    }
}