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

char	**count_word(char *str, char *charset)
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
		str++;
	}
	arr = malloc((word + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	return (arr);
}

char	*malloc_word(int size)
{
	char	*string;

	if (size > 0)
		string = malloc(size + 1);
	else
		return (NULL);
	if (!string)
		return (NULL);
	return (string);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	char	*start;
	int	size;
	int	i;
	int	j;

	j = 0;
	i = 0;
	size = 0;
	start = str;
	arr = count_word(str, charset);
	while (*str != 0)
	{
		if (!is_sep(*str, charset))
			size++;
		else if (is_sep(*str, charset))
		{
			*arr = malloc_word(size);
			printf("%c\n", *start);
			while (!is_sep(*start, charset))
			{
				(*arr)[j++] = *start;
				start++;
			}
			arr++;
		}
		size = 0;
		j = 0;
		str++;
	}
	return (arr);
}

int main()
{
	char **str = ft_split("hive,hel,", ",i");
	for (int i = 0; i < 10; i++)
		printf("%s\n", str[i]);
}
