#include "ft_library.h"

void *ft_memmove(void *dest, const void *src, size_t n){
    const char *csrc = (char *)src;
    char *cdest = (char *)dest;

    if(dest == NULL || src == NULL)
        return NULL;

    //allocate memory forr buff array
    char *buff = (char *)malloc(sizeof(char) * n);

    if (buff == NULL){
        return NULL;
    }

    size_t i;

    for (i = 0; i < n; i++){
        *(buff +i) = *(csrc + i);
    }

    for (i = 0; i < n; i++){
        *(cdest +i) = *(buff + i);
    }


    free(buff);
    
    return cdest;

}