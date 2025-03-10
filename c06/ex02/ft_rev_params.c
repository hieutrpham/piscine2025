/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trupham <trupham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 18:19:14 by trupham           #+#    #+#             */
/*   Updated: 2025/02/28 18:19:18 by trupham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	while (--i >= 1)
	{
		write(1, argv[i], len(argv[i]));
		write(1, "\n", 1);
	}
	return (0);
}
