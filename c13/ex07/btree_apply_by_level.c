#include "../ft_btree.h"
#include <stdlib.h>

typedef struct t_queue
{
	struct t_queue	*next;
	t_btree			*node;
} s_queue;

void	enqueue(s_queue **q, t_btree *node)
{
	s_queue	*new_q;
	s_queue	*temp;

	new_q = malloc(sizeof(s_queue));
	if (!new_q)
		return;
	new_q->node = node;
	new_q->next = NULL;
	if (*q == NULL)
		*q = new_q;
	else
	{
		temp = *q;
		while (temp->next)
			temp = temp->next;
		temp->next = new_q;
	}
}

t_btree	*dequeue(s_queue **q)
{
	if (*q == NULL)
		return NULL;
	s_queue *temp;
	t_btree *node;

	temp = *q;
	if (temp->next != NULL)
		*q = temp->next;
	node = temp->node;
	free(temp);
	return node;
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item, int current_level, int is_first))
{

}
