#include "ft_library.h"

char * ft_itoa(int n){
    char *s;
    int number = n;
    int number_counter = 0;
    int sign = 1;
    int digit;

    while(number != 0)
    {
        number = number/10;
        number_counter++;
    }
    number = n;
    
    if(number <  0){
        number_counter++;       //+1 for "-" 
        sign = -1;
    }

    s = (char *)malloc((number_counter+1) * sizeof(char));
    if (s == NULL)
        return NULL;
     
    if (n == 0){
        s[0] = '0';
        s[1] = '\0';
        return s;
    }


    for (int i = number_counter-1; i > 0; i--)
    {
        digit = number%10;
        number = number/10;
        if(digit < 0)
            digit*=-1;
        s[i] = (char)(digit + 48);
    }

    if(sign == -1 )
        s[0]='-';
    else
        s[0] = (char)(number + 48);

    s[number_counter] = '\0';

    return s;
}