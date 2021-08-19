#include "ft_library.h"

int ft_memcmp(const void *s1, const void *s2, size_t n){
    unsigned char *str1 = (unsigned char *)s1;
    unsigned char *str2 = (unsigned char *)s2;

    if (n == 0 || s1 == s2){
        return 0;
    }

    while(n > 0){
        if(*str1 != *str2){
            return (*str1> *str2) ? 1:-1;
        }
        n--;
        str1++;
        str2++;
    }
    
    return 0;

}