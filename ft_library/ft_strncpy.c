#include "ft_library.h"

char *ft_strncpy(char *dest, const char *src, size_t n){
    size_t i;

    if (dest == NULL || src == NULL)
        return NULL;
    

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    for (; i < n; i++)
    {
        dest[i] = '\0';
    }
    
    return dest;
}