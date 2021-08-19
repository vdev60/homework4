#include "ft_library.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n){
    char *csrc = (char *)src;
    char *cdest = (char *)dest;

    if(src == NULL || dest == NULL)
        return NULL;

    for (size_t i = 0; i < n; i++)
    {
        cdest[i] = csrc[i];
        if(csrc[i] == c){
            return &cdest[i+1];
        }
    }
    
    return NULL;

}