#include "ft_library.h"
void * ft_memalloc(size_t size){
    void *mem =malloc(size);

    if (mem == NULL)
        return NULL;   

    for (size_t i = 0; i < size; i++)
    {
        *(char *)mem = 0;
        mem++;
    }
    
    return mem-size;
}