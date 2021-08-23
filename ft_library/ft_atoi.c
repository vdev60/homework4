#include "ft_library.h"

int ft_atoi(const char *nptr){

    int result = 0;
    int sign = 1;
    int i = 0;
    long int len = ft_strlen(nptr);

    if (nptr == NULL)
        return 0;
    
    if(nptr[0] == '-'){
        i++;
        sign = -1;
    }

    while(i < len){

        if (nptr[i] > 47 && nptr[i] < 58){
            result = (result*10) + (nptr[i]-48);
        }
        else if(nptr[i] == ' ' && sign == -1){
            return 0;
        }
        else if(nptr[i] == ' '){
            i++;
            continue;
        }else{
            break;
        }
        i++;
    }

    return (sign * result);

}