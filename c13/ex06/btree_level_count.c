#include "../ex00/btree_create_node.c"
#include <stdio.h>

int	btree_level_count(t_btree *root)
{
	if (!root)
		return 0;
	int left = btree_level_count(root->left);
	printf("left\n");
	int right = btree_level_count(root->right);
	printf("right\n");
	if (left > right)
		return left + 1;
	else
		return right + 1;
}

t_btree	*btree_create_node(void *item);
int main()
{
	t_btree *node1 = btree_create_node("hello");
	t_btree *node2 = btree_create_node("hello");
	t_btree *node3 = btree_create_node("hello");
	t_btree *node4 = btree_create_node("hello");
	t_btree *node5 = btree_create_node("hello");
	
	node1->left = node2;
	node1->right = node3;
	node2->left = node4;
	node2->right = node5;
	printf("%d\n", btree_level_count(node1));
	/*printf("%d\n", btree_level_count(node2));*/
}
