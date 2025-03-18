/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trupham <trupham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:31:11 by trupham           #+#    #+#             */
/*   Updated: 2025/03/10 13:31:12 by trupham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != 0)
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	**arr_alloc(char *str, char *charset)
{
	int	word;
	int	mark;
	char	**arr;
	int	i;

	i = 0;
	mark = 0;
	word = 0;
	while (str[i] != 0)
	{
		if (!is_sep(str[i], charset) && mark == 0) 
		{
			word++;
			mark = 1;
		}
		else if (is_sep(str[i], charset))
			mark = 0;
		i++;
	}
	arr = malloc((word + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	return (arr);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int	size;
	int	i;
	int	i1;
	int	j;
	int start;

	j = 0;
	i = 0;
	i1 = 0;
	size = 0;
	arr = arr_alloc(str, charset);
	while (str[i] != 0)
	{
		if (is_sep(str[i], charset))
		{
			i++;
			continue;
		}
		start = i;
		while (!is_sep(str[i], charset) && str[i] != 0)
		{
			size++;
			i++;
			continue;
		}
		arr[j] = malloc(size + 1);
		if (!arr[j])
			return (NULL);
		while (!is_sep(str[start], charset) && str[start] != 0)
			arr[j][i1++] = str[start++];
		arr[j][i1] = 0;
		j++;
		i1 = 0;
		size = 0;
	}
	arr[j] = 0;
	return (arr);
}

int main()
{
	char **str = ft_split("hive,dferi,dasfkjwer,werj", ",");
	int i = 0;
	while (str[i] != 0)
	{
		printf("%s\n", str[i]);
		i++;
	}
}
