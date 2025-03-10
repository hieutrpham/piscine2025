/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trupham <trupham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 08:56:26 by trupham           #+#    #+#             */
/*   Updated: 2025/03/04 19:10:44 by trupham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != 0)
	{
		count++;
		str ++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		dst_size;
	int		j;

	if (size == 0)
	{
		dest = (void *)malloc(sizeof(char));
		return (dest);
	}
	dst_size = 0;
	j = -1;
	while (++j < size)
		dst_size += ft_strlen(strs[j]);
	dest = malloc(dst_size + ft_strlen(sep) * (size - 1) + 1);
	if (!dest)
		return (NULL);
	i = -1;
	while (++i < size - 1)
	{
		dest = ft_strcat(dest, strs[i]);
		dest = ft_strcat(dest, sep);
	}
	dest = ft_strcat(dest, strs[size - 1]);
	return (dest);
}
