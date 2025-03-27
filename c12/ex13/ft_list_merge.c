#include "../ex08/ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*current;

	current = *begin_list1;
	if (!current)
		return;
	while (current)
		current = current->next;
	current->next = begin_list2;
}
