#include "ft_library.h"

char * ft_strtrim(char const *s){
    int i = 0;
    int j = ft_strlen(s) - 1; // we substract it for second 'while'

    while (s[i] == ' '  || s[i] == '\t' || s[i] == '\n')
        i++;

    while(s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
        j--;
    
    if (j < 0){
        return NULL;
    }
    
    char *  new_str = (char *)malloc((j+2)  * sizeof(char));  // it is because of at the beginning we have subtracted -1
    if(new_str == NULL)
        return NULL;

    ft_memcpy(new_str, &s[i], j-i+1); //j-i+1 - length of full string without '/0'
    new_str[j+2] = '\0';  

    return new_str;
}
