#include "ft_library.h"
void ft_striter(char *s, void(*f)(char *)){
    
    if (s == NULL || f == NULL)
        return ;

    while(*s)
    {
        f(s);
        s++;
    }
}

/*For test
void to_upper(char * s){
   *s = ft_toupper(*s);
}

char s[20] = "aaBccsd";
ft_striter(s, to_upper);
printf("%s\n", s);
*/