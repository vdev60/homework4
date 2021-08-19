#include "ft_library.h"

char *ft_strdup(const char *s){
    if (s == NULL)
        return NULL;
        
    int len = ft_strlen(s);
    char *dub = (char *)malloc(sizeof(char)*(len+1));

    if (dub == NULL){
        return NULL;
    }

    int i = 0;
    while(s[i]){
        dub[i] = s[i];
        i++;
    }
    dub[i] = '\0';

    return dub;

}