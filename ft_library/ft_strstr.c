#include "ft_library.h"
char *ft_strstr(const char *haystack, const char *needle){
    size_t i = 0;
    size_t j = 0;
    char * str = (char *)haystack;

    if (haystack == NULL || needle == NULL){
        return NULL;
    }

    while (str[i] != '\0')
    {
        if (str[i] == needle[j])  
            j++;
        else
            j =0;
        
        if (needle[j] =='\0')
            return &str[i-j+1];
        
        i++;
    }
    
    return NULL;
}
