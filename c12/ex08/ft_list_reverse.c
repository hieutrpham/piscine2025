#include "../ex06/ft_list.h"
void	ft_list_reverse(t_list **begin_list)
{
	t_list	*current;
	t_list	*next;
	t_list	*prev;

	current = *begin_list;
	next = NULL;
	prev = NULL;
	while (current)
	{
		next = current->next; //storing the next link
		current->next = prev; //current next point to the previous link
		prev = current; // prev link is now current
		current = next; // proceed to the next link until null
	}
	*begin_list = prev;
}
