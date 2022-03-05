#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list *last;
    
    last = lst;
    while(lst)
    {
        last = lst;
        lst=lst->next;
    }
    return (last);
}

