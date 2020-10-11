
#include "get_address.h"

char *mx_nbr_to_hex(unsigned long nbr)
{
    char *hex =mx_strnew(50);
    int i = 0; 
    while(nbr!=0) 
    {    
 
        int temp  = 0; 
 
        temp = nbr % 16; 
 
        if(temp < 10) 
        { 
            hex[i] = temp + 48; 
            i++; 
        } 
        else
        { 
            hex[i] = temp + 87; 
            i++; 
        } 
 
        nbr = nbr/16; 
    } 
 
 
    int len=mx_strlen(hex);
    char *result =mx_strnew(len);
    for (int i=0;i<len;i++) result[i]=hex[len-i-1];
    free(hex);
 
        for (int i=0;i<len;i++)  cout<<result[i];
 return result;
 
}


