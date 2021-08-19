#include "ft_library.h"    
void ft_putnbr(int n){
    char *str;
    str = ft_itoa(n);
    ft_putstr(str);
}