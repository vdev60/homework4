#include "ft_library.h"
int ft_isalnum(int c){
    if(ft_isalpha(c) || ft_isdigit(c))
        return 8;
    else
        return 0;
}