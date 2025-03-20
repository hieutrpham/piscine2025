#include "ft_list.h"

void	ft_list_push_front(t_list	**begin_list, void *data)
{
	t_list	*node;

	node = ft_create_elem(data);
	if (!node)
		return;
	node->next = *begin_list;
	*begin_list = node;
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	int	i;
	t_list *begin_list;

	begin_list = NULL;
	i = 0;
	while (i < size)
	{
		ft_list_push_front(&begin_list, strs[i]);
		i++;
	}
	return (begin_list);
}

int main()
{
	char *words[] = {"one", "two", "three"};
	t_list *list = ft_list_push_strs(3, words);

	// Print list
	t_list *temp = list;
	while (temp)
	{
		printf("%s -> ", (char *)temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}
