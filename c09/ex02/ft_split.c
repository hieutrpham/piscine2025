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

int	count_word(char *str, char *charset)
{
	int	word;
	int	mark;

	mark = 0;
	word = 0;
	while (*str != 0)
	{
		if (!is_sep(*str, charset) && mark == 0) 
		{
			word++;
			mark = 1;
		}
		else if (is_sep(*str, charset))
			mark = 0;
		str++;
	}
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char **arr;
	return (arr);
}

int main()
{
	printf("%d\n", count_word("hive,hel", ",i"));
}
