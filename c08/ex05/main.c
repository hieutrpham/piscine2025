#include <stdlib.h>
#include "ft_stock_str.h"
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);

int main()
{
	char *arr[] = {"hello", "world"};
	struct s_stock_str *node;
	node = ft_strs_to_tab(2, arr);
	ft_show_tab(node);
	for (int i = 0; i < 2; i++)
	{
		free(node[i].copy);
	}
	free(node);
}
