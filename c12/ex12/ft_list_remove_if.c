#include "../ex08/ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(void *, void *), void (*free_fct)(void *))
{
	t_list	*current;
	t_list	*prev;
	t_list	*next;

	current = *begin_list;
	while (current && cmp(current->data, data_ref) == 0)
	{
		free_fct(current->data);
		*begin_list = current->next;
		free(current);
		current = *begin_list;
	}
	while (current)
	{
		next = current->next;
		if (cmp(current->data, data_ref) == 0)
		{
			free_fct(current->data);
			prev->next = next;
			free(current);
		}
		else
			prev = current;
		current = next;
	}
}
