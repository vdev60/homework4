#include "ft_library.h"

void ft_lstiter(t_list *lst, void (*f)(t_list *elem)){
    if(lst == NULL || f == NULL)
        return ;
    t_list *current = lst;
    while (current)
    {
        f(current);
        current = current->next;
    }
    
}

/*
void tests(t_list *t){
    char * str1 = "Hello";
    ft_strcat(t->content , str1);
}

    t_list *t;
    char * str = "Test string";
    t_list *t1;
    char * str1 = "Test string";
    t = ft_lstnew(str,9);
    t1 = ft_lstnew(str1,5);

    ft_lstadd(&t, t1);
    ft_lstiter(t1, tests);

    printf("%s\n", t1->content);
    printf("%s\n", t->content);
*/