#include "ft_library.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem)){
    t_list * current;
    t_list *new_list;
    t_list *new;

    if (lst == NULL || f == NULL)
        return NULL;
    current = lst;
    new_list = ft_lstnew(current ->content, current->content_size); 
    new_list = f(new_list);
    new_list->next = NULL;
    current = current->next;
    while (current)
    {
        new = ft_lstnew(current ->content, current->content_size);
        new=f(new);
        ft_lstadd(&new_list, new);
        current = current->next;
    }
    
    return new_list;
}


/*

t_list * test(t_list *t){
    t_list * new = t;
    char *str = "R";
    printf("MAP - %s\n", t->content);
    ft_strcat(new->content, str);
    return new;    
}

void print_list(t_list *t){
    t_list *current = t;
    do
    {
        printf("%s\n", current->content);
        current = current->next;
    }while(current);
    

}
    t_list *t;
    char * str = "list t";
    t_list *t1;
    char * str1 = "list t1";
    t_list *t2;
    char * str2 = "list t2";

    t = ft_lstnew(str, 7);
    t1 = ft_lstnew(str1, 7);
    t2 = ft_lstnew(str2, 7);


    ft_lstadd(&t, t1);
    ft_lstadd(&t1, t2);
    print_list(t);

    t_list * new;
    new = ft_lstmap(t, test);
    

    print_list(new);
    
*/