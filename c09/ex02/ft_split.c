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
// NOTE: function to find out how many boxes we can get from a string seperated by charset
// 
int	count_box(char *str, char *charset)
{
	int	i;
	int	box;

	i = 0;
	box = 0;
	while (str[i] != 0)
	{
		if (is_sep(str[i], charset))
			i++;
		else
		{
			i++;
			box++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char **arr;
	return (arr);
}

int main()
{
	printf("%d\n", is_sep('8', "oiwueoiru"));
	for (int i = 0; i < 10; i++)
		printf("%d\n", is_sep('8', "oiwueoiru"));
}
