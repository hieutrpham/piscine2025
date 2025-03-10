#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int main()
{
	char *arr[] = {"hello", "world"};
	struct s_stock_str *node;
	node = ft_strs_to_tab(2, arr);
	printf("%s", node->copy);
	for (int i = 0; i < 2; i++)
	{
		free(node[i].copy);
	}
	free(node);
}
