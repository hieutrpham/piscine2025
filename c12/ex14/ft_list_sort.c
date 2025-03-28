#include "../ex08/ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)(void *, void *))
{
	t_list	*one;
	t_list	*two;
	t_list	*prev;
	t_list	*current;
	t_list	*next;

	one = *begin_list;
	if (!one || !one->next)
		return;
	two = one->next;
	if (cmp(one->data, two->data) > 0)
	{
		one->next = two->next;
		two->next = one;
		*begin_list = two;
	}
	prev = two;
	current = one;
	int swap = 1;
	while (swap)
	{
		swap = 0;
		current = *begin_list;
	}
	while (current->next)
	{
		next = current->next;
		if (cmp(current->data, next->data) <= 0)
		{
			prev = current;
			current = next;
		}
		else
		{
			prev->next = current->next;
			prev = current->next;
			current->next = next->next;
			next->next = current;
		}
	}
}
