#include "ft_library.h"

char *ft_strrchr(const char *s, int c){
    char *str = (char*)s;
    char *temp = NULL;

    if(str == NULL)
        return NULL;
        
    while (*str != '\0')
    {
        if (*str == (char)c){
            temp=str;   
        }
        str++;
    }

    return c == '\0' ? str:temp; 

}