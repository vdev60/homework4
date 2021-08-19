#include "ft_library.h"

char *ft_strcat(char *dest, const char *src){
    size_t i = 0;
    size_t dest_len = ft_strlen(dest);

    while(src[i])
    {
        dest[dest_len+i] = src[i];
        i++;
    }

    dest[dest_len+i] = '\0';
    
    return dest;
}