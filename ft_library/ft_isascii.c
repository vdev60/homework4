#include "ft_library.h"
//return 1 if c is in ASCII
int ft_isascii(int c){
    if (c > 0 && c < 128)
        return 1;
    else
        return 0;

}