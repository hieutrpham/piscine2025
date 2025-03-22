#include "ft_list.h"
int	ft_list_size(t_list *begin_list)
{
    int	count;
    t_list *current;

    count = 0;
    current = begin_list;
    while (current)
    {
	count++;
	current = current->next;
    }
    return (count);
}

t_list  *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    int size;
    int i;

    i = 0;
    size = ft_list_size(begin_list);
    if (nbr > size - 1)
	return (NULL);
    while (i < size - 1 - nbr)
    {
	begin_list = begin_list->next;
	i++;
    }
    return (begin_list);
}
