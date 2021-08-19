#include "ft_library.h"

void ft_lstdel(t_list **alst, void(*del)(void *,size_t)){
    if(alst == NULL || *alst == NULL || del == NULL)
        return ;
    t_list *current = *alst;
    t_list *temp;
    while (current)
    {
        del(current->content, current->content_size);
        temp = current;
        current = current->next;
        free(temp);
        temp = NULL;
    }
    *alst = NULL;
}

