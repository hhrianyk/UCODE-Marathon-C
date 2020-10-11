void mx_str_reverse(char *s) {
        int j = 0;
    char t = s[0];
    while (t != '\0')
    {
        j++;
        t = s[j];
    }
    
    for (int i = 0; i < j/2; i++) {
       
        char temp = s[i];
        s[i] = s[j - 1 - i];
        s[j - 1 - i]= temp;
        

    }
 
}
