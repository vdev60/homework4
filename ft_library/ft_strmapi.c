#include "ft_library.h"

char * ft_strmapi( char const *s,char(*f)(unsigned int, char)){
    char * new_str = ft_strnew(ft_strlen(s));
    unsigned int i = 0;

    if (new_str == NULL)
        return NULL;

    while (s[i])
    {
        new_str[i] = f(i,s[i]);
        i++;
    }
    new_str[i]= '\0'; 
    
    return new_str;
}

/*
char to_l(unsigned int i, char s){
    if(i % 2 == 0) 
        return tolower(s);
    else
        return toupper(s);

  char s[20] = "AFHUISF&*REFHYUVF";
    char *new_s;
    new_s = ft_strmapi(s, to_l);

    size_t i = 0;
    while (new_s[i])
    {
      printf("%c", new_s[i]);

        i++;
    }
    
   free(new_s);

*/