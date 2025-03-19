#include "ft_list.h"
int	ft_list_size(t_list *begin_list)
{
	int	count;

	count = 0;
	while (begin_list)
	{
		count++;
		begin_list = begin_list->next;
	}
	return (count);
}

int main()
{

	t_list *list = NULL;
	printf("%d\n", ft_list_size(list)); // Output: 0

	ft_list_push_front(&list, "Node 1");
	ft_list_push_front(&list, "Node 2");
	ft_list_push_front(&list, "Node 3");

	printf("%d\n", ft_list_size(list)); // Output: 3

}
