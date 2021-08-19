#include "ft_library.h"

t_list *ft_lstnew(void const * content, size_t content_size){
    t_list *t = (t_list *)malloc(sizeof(t_list)); 
    if(t == NULL)
        return NULL;
    if (content == NULL){
        t->content = NULL;
        t->content_size = 0;

    }else{
        t->content = malloc(content_size);
        ft_memcpy(t->content, content, content_size);
        t->content_size = content_size;
    }
    
    t->next = NULL;
    return t;
}