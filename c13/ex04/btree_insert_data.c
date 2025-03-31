#include "../ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	t_btree	*node;

	node = *root;
	if (cmpf(item, node->item) > 0)
	{
		if (node->right == NULL)
			node->right = btree_create_node(item);
	}
	if (cmpf(item, node->item) == 0)
	{
		if (node->right == NULL)
			node->right = btree_create_node(item);
	}
	if (cmpf(item, node->item) > 0)
	{
		if (node->right == NULL)
			node->right = btree_create_node(item);
	}
}
