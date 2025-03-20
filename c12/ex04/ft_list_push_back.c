#include "ft_list.h"
void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *node;
	t_list *current;

	node = ft_create_elem(data);
	if (!node)
		return;
	if (!begin_list)
	{
		*begin_list = node;
		return;
	}
	current = *begin_list;
	while (current->next)
		current = current->next;
	current->next = node;
}
