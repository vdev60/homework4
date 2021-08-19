#include "ft_library.h"

void ft_lstadd(t_list **alst, t_list * new){
    if (alst == NULL || *alst == NULL ||new == NULL)
        return ;
    t_list * current = *alst;
    while (current->next)
    {
        current = current->next;
    }
    current->next = new;
    new->next = NULL;    
}