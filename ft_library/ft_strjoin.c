#include "ft_library.h"

char * ft_strjoin(char const *s1, char const *s2){
    int s1_len = ft_strlen(s1);
    int s2_len = ft_strlen(s1);
    char * join_str = (char *)malloc((s1_len + s2_len +1) * sizeof(char));

    if (join_str == NULL)
        return NULL;
    
    ft_strcpy(join_str, s1);
    ft_strcpy(&join_str[s1_len], s2);
    
    return join_str;
}