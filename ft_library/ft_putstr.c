#include "ft_library.h"

void ft_putstr(char const *s){
    while (*s)
    {
        write(1,s,1);
        s++;
    }
    
}