#include "ft_library.h"
int ft_strcmp(const char *s1, const char *s2){
    int result;
    int i = 0;

    if(s1 == NULL ||s2 == NULL)
        return 0;

    while (s1[i] || s2[i])
    {
        if (s1[i] ==  s2[i]){
            result = 0;
        }else{
            return s1[i] - s2[i];

        }
        i++;
    }

    return result;

}