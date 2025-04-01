#include "../ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	t_btree	*node;
	
    if (!root || !cmpf)
		return;
    if (!*root)
	{
		*root = btree_create_node(item);
		return;
    }
	node = *root;
	if (cmpf(item, node->item) >= 0)
	{
		if (node->right == NULL)
			node->right = btree_create_node(item);
		else
			btree_insert_data(&node->right, item, cmpf);
	}
	if (cmpf(item, node->item) < 0)
	{
		if (node->left == NULL)
			node->left = btree_create_node(item);
		else
			btree_insert_data(&node->left, item, cmpf);
	}
}
