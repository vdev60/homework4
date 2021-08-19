#include "ft_library.h"

char * ft_strsub(char const *s, unsigned int start, size_t len){
    char * sub_str = (char *)malloc((sizeof(char) * len) +1);

    ft_bzero(sub_str, len);
    if (sub_str == NULL)
        return NULL;

    size_t i = 0;
    while (s[i])
    {
        if((unsigned int)s[i] == start){
            ft_strncpy(sub_str, &s[i], len);
            sub_str[len +1] = '\0';
            break;
        }
        i++;
    }
    
    

    return sub_str;
}