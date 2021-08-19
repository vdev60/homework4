#include "ft_library.h"

char *ft_strchr(const char *s, int c){
    char * str = (char*)s;
    if(s == NULL)
        return NULL;
        
    while (*str != '\0')
    {
        if (*str == (char)c){
            return str;   
        }
        str++;
    }

    return (c == '\0') ? str : NULL; 

}