#include "ft_library.h"

void *ft_memcpy(void *dest, const void *src, size_t n){
    const char *csrc = (char *)src;
    char *cdest = (char *)dest;

    if ((csrc == NULL) && (cdest == NULL)){
        return NULL;
    }

    for (size_t i = 0; i < n; i++)
    {
        cdest[i] = csrc[i];
    }
    
    return dest;

}