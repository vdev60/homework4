#include "ft_library.h"
char *ft_strnew(size_t size){
    char *str = (char *)malloc(sizeof(char) * size);
    if(str == NULL)
        return NULL;

    for (size_t i = 0; i < size; i++)
    {
        str[i] = '\0';
    }
    
    return str;
}