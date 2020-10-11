int mx_strlen(const char *);

char *mx_strcat(char *s1, const char *s2) {
   int len_s1 = mx_strlen(s1);
   int len_s2 = mx_strlen(s2);

   for (int index = 0; index < len_s2; index++) {
       s1[index + len_s1] = s2[index];
   }

   s1[len_s1 + len_s2] = '\0';

   return s1;
}
