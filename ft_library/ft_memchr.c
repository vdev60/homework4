#include "ft_library.h"

    void *ft_memchr(const void *s, int c, size_t n){

    if ((s == NULL)){
        return NULL;
    }
    
    const char *src = (const char *)s;

    for (size_t i = 0; i < n; i++)
    {
        if((unsigned char)src[i] == (unsigned char)c){
            return  (void *)&src[i];
        }
    }
    
    return NULL;

}