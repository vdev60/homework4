#include "ft_library.h"
// "a*b**a***s", '*' - ["a","b","a","s"]
char ** ft_strsplit(char const *s, char c){
    char **words;
    int counter_words = 0;
    int len_word = 0;
    int temp = 0;
    int len_s = ft_strlen(s);
    if(s == NULL)
        return NULL;
    
    for (int i = 0; i < len_s; i++)
    {
        if(s[i] == c)
            continue;

        while (s[i] != c && s[i] != '\0'){
            i++;
            temp = 1;
        }

        if (temp == 1)
            counter_words++;

        temp = 0;
    }
    
    words = (char **)malloc(counter_words* sizeof(char *));
    if (words == NULL)
        return NULL;

    counter_words = 0;

    for (int  i = 0; i < len_s; i++)
    {
        if (s[i] == c){
            continue;
        }

        len_word = i;
        int i_p = i;
        while (s[i] != c && s[i] != '\0')
        {
            i++;
        }
        len_word = i - len_word;

        if(len_word > 0)
        {
            
            words[counter_words] = ft_strnew(len_word );
            int k = 0;
            while (s[i_p] != c && s[i_p] != '\0')
            {
                words[counter_words][k] = s[i_p];
                i_p++;
                k++;
            }
            
            counter_words++;
        }
        len_word = 0;
        i--;
    }  

    return words;
}


    