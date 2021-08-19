#include "ft_library.h"

int ft_atoi(const char *nptr){

    int result = 0;
    int sign = 1;
    int i = 0;

    if (nptr == NULL)
        return 0;
    
    if(nptr[0] == '-'){
        i++;
        sign = -1;
    }

    while(nptr[i] > 47 && nptr[i] < 58){
        result = (result*10) + (nptr[i]-48);
        i++;
    }

    return (sign * result);

}