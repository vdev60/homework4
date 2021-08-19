#include "ft_library.h"

void ft_lstdelone(t_list **alst, void(*del)(void *,size_t)){
    if(alst == NULL || *alst == NULL || del == NULL)
        return ;
    del((*alst)->content,(*alst)->content_size);
    free(*alst);
    *alst = NULL;
}
