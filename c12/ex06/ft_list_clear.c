#include "ft_list.h"

void    ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
    if (!begin_list)
        return;
    t_list  *current;
    t_list  *next;

    current = begin_list;
    while (!current)
    {
        next = current->next;
        free_fct(current->data);
        free(current);
        current = next;
    }
}
