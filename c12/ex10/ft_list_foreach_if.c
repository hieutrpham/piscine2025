#include "../ex08/ft_list.h"
void	ft_list_foreach_if(t_list *begin_list, void(*f)(void*), void *data_ref, int (*cmp)())
{
	t_list *current;

	current = begin_list;
	while (current)
	{
		if (cmp(current->next, data_ref) == 0)
			f(current->data);
		current = current->next;
	}
}
