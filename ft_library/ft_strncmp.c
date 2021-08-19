#include "ft_library.h"
int ft_strncmp(const char *s1, const char *s2, size_t n){
    int result;
    
     if(s1 == NULL ||s2 == NULL)
        return 0;
        
    for (size_t i = 0; i < n; i++)
    {
        if (s1[i] ==  s2[i]){
            result = 0;
        }else{
            return s1[i] - s2[i];

        }
    }

    return result;
    
}
