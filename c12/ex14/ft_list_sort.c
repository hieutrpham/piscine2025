#include "../ex08/ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)(void *, void *))
{
	t_list	*prev;
	t_list	*current;
	t_list	*next;

	int swap = 1;
	while (swap)
	{
		swap = 0;
		current = *begin_list;
		prev = NULL;
		while (current->next)
		{
			next = current->next;
			if (cmp(current->data, next->data) > 0)
			{
				if (prev)
					prev->next = next;
				else // if prev is NULL then head needs swapped
					*begin_list = next;
				current->next = next->next;
				next->next = current;
				prev = next;
				swap = 1;
			}
			else
			{
				prev = current;
				current = current->next;
			}
		}
	}
}
