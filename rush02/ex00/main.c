/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 19:38:59 by jinzhang          #+#    #+#             */
/*   Updated: 2025/03/09 19:58:57 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "rush.h"

extern int	errno;

char	*get_dict()
{
	int	fd = open("numbers.dict", O_RDONLY);

	char	ch;
	int	size;

	size = 0;
	while (read(fd, &ch, 1) > 0)
		size++;
	close(fd);

	char	*dict = malloc(size + 1);
	int	i;

	i = 0;
	fd = open("numbers.dict", O_RDONLY);
	while (read(fd, &ch, 1) > 0)
	{
		dict[i] = ch;
		i++;
	}
	dict[size] = '\0';

	close(fd);
	return (dict);
}
// NOTE: need to free after use
// function that split a string on '\n' and return an array of strings
char	**split_newline(char *str, int *str_size)
{
	int line;
	int i;

	line = 0;
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == '\n')
			line++;
		i++;
	}

	*str_size = line;

	char	**arr = malloc((line +1) * sizeof(char *));

	i = 0;
	int 	j;
	int	c;
	int	size;
	int	k;

	j = 0;
	c = 0;
	size = 0;
	k = 0;
	while (str[i] != 0) 
	{
		if (str[i] != '\n')
		{
			size++;
			i++;
		}
		else
		{
			arr[j] = malloc((size + 1));
			k = i - size;
			while (str[k] != '\n')
			{
				arr[j][c] = str[k];
				c++;
				k++;
			}
			arr[j][c] = '\0';
			size = 0;
			c = 0;
			j++;
			i++;
		}
	}
	arr[line] = NULL;
	return (arr);
}

char	*trim_spaces(char *str);

struct	node *construct_node(char *str);

typedef	struct node {
	char *key;
	char *value;
} node ;

#include <stdio.h>
int	main(int argc, char **argv)
{
	int	size;

	size = 0;
	/*ft_input_arg(argc, argv);*/
	char *str = get_dict();
	char **arr = split_newline(str, &size);
	/*node *new_node = construct_node(trim_spaces("100: hundred"));*/
	printf("str size: %d\n", size);
	/*printf("new node key: %s\nnew node value: %s\n", new_node->key, new_node->value);*/
	printf("trim str: %s\n", (arr[1]));
}

// NOTE: function takes a string and remove all spaces in it. need free after use
char	*trim_spaces(char *str)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (str[i] != 0)
	{
		if (str[i] != ' ')
		{
			size++;
			i++;
		}
		else
			i++;
	}
	/*printf("str size: %d\n", size);*/
	i = 0;
	char	*new_str = malloc((size + 1) * sizeof(char));
	int j;

	j = 0;
	while (j < size)
	{
		/*printf("%c\n", str[i]);*/
		if (str[i] != ' ')
		{
			new_str[j] = str[i];
			i++;
			j++;
		}
		else
			i++;
	}
	new_str[size] = '\0';
	return (new_str);
}

// NOTE: function that split a string on : and assign it to the node struct 
// return value is an array of nodes
char	*construct_nodes(char **str, int arr_size)
{
	struct node *arr;
	
	arr = malloc((arr_size + 1) * sizeof(struct node));
	if (!arr)
		return (NULL);
	return 0;
}

int	ft_strlen(char *str)
{
	int	count;
	int	i;

	i = -1;
	count = 0;
	while (str[++i] != 0)
		count++;
	return (count);
}

struct node *construct_node(char *str)
{
	struct node *one_node;

	one_node = malloc(sizeof(struct node));
	int i = 0;
	int size = 0;
	int k = 0;
	int c = 0;
	int v = 0;
	int str_len = ft_strlen(str);

	while (str[i] != '\0')
	{
		if (str[i] != ':')
		{
			size++;
			i++;
		}
		else
		{
			one_node->key = malloc(size + 1);
			while (str[k] != ':')
			{
				one_node->key[c] = str[k];
				k++;
				c++;
			}
			one_node->key[c] = '\0';
			one_node->value = malloc(str_len - size);
			while (str[k+1] != 0)
			{
				one_node->value[v] = str[k+1];
				v++;
				k++;
			}
			one_node->value[v] = '\0';
			break;
		}
	}
	return (one_node);
}
