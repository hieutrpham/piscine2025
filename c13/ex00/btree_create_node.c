#include "../ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*new_node;

	new_node = malloc(sizeof(t_btree));
	new_node->item = item;
	new_node->left = NULL;
	new_node->right = NULL;
	return new_node;
}
