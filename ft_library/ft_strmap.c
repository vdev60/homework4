#include "ft_library.h"

char * ft_strmap( char const *s,char(*f)(char)){
    char * new_str = (char *)malloc(sizeof(char) * (ft_strlen(s)+1));
    size_t i = 0;

    if (new_str == NULL || f == NULL)
        return NULL;

    while (s[i])
    {
        new_str[i] = f(s[i]);
        i++;
    }
    new_str[i]= '\0'; 
    
    return new_str;
}

/*
char to_upper(char s){
   return toupper(s);
}

   char str[20] = "hello world";
   char * n;
   n = ft_strmap(str, to_upper);
   for (size_t i = 0; i < ft_strlen(n); i++)
   {
      printf("%c\n", n[i]);
   }

   printf("%p\n", n);
   printf("%p\n", str);   
*/