#include "ft_library.h"
void ft_striteri(char *s, void(*f)(unsigned int, char *)){
    unsigned int i;
    
    if (s == NULL || f == NULL)
        return ;

    i = 0;
    while(s[i])
    {
        f(i,&s[i]);
        i++;
    }
}

/*For test
void to_upper(unsigned int i, char * s){
   s[i] = tolower(s[i]);
}

   char s[20] = "AFHUISF&*REFHYUVF";
   ft_striteri(s, to_upper);
   printf("%s\n", s);
*/