#include "ft_library.h"

void *ft_memset(void *s, int c, size_t n){
    char *str = (char *)s;

    for(size_t i = 0; i<n; i++){
        str[i] = c;
    } 
    return str;  
}


