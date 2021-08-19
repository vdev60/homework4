#include "ft_library.h"
//function return 1024 if -c- is an alphabetic character
int ft_isalpha(int c){
    if ((c > 64 && c < 91) || (c > 96 && c < 123))
        return 1024;
    else
        return 0;
}