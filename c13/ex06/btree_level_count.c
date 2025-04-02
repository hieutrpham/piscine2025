#include "../ex00/btree_create_node.c"

int	taso = 0;

int	btree_level_count(t_btree *root)
{
	if (!root)
		return 0;
	taso += 1;
	btree_level_count(root->left);
	btree_level_count(root->right);
	return taso;
}

t_btree	*btree_create_node(void *item);
#include <stdio.h>
int main()
{
	t_btree *node1 = btree_create_node("hello");
	t_btree *node2 = btree_create_node("hello");
	t_btree *node3 = btree_create_node("hello");
	t_btree *node4 = btree_create_node("hello");
	t_btree *node5 = btree_create_node("hello");
	t_btree *node6 = btree_create_node("hello");
	t_btree *node7 = btree_create_node("hello");
	
	node1->left = node2;
	node1->right = node3;
	node2->left = node4;
	node2->right = node5;
	node3->right = node6;
	node5->right = node7;
	printf("%d\n", btree_level_count(node1));
	/*printf("%d\n", btree_level_count(node2));*/
}
