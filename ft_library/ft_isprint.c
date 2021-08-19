#include "ft_library.h"
int ft_isprint(int c){
    if (c > 31 && c < 128)
        return 16384;
    else
        return 0;

}