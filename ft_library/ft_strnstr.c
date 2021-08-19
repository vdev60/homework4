#include "ft_library.h"

char *ft_strnstr(const char *haystack, const char *needle ,size_t len){
    char *str = (char *)haystack;

    if(needle == NULL || ft_strlen(needle) == 0)
        return (char *)haystack;

    if (haystack == NULL)
        return NULL; 

    size_t j = 0;
    size_t i;
    for (i = 0; i < len && str[i] != '\0'; i++)
    {

        if (str[i] == needle[j])
        {   
            j++;
        }else{
            j =0;
        }
        
        if (needle[j] =='\0')
        {
           return &str[i-j+1];
        }
        

    }

    return NULL;
}