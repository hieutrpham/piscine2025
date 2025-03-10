/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trupham <trupham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 16:48:51 by trupham           #+#    #+#             */
/*   Updated: 2025/02/22 16:49:12 by trupham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_edge(int width)
{
	int	i;

	i = 0;
	if (width == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
		return ;
	}
	ft_putchar('o');
	while (i < width - 2)
	{
		ft_putchar('-');
		i++;
	}
	ft_putchar('o');
	ft_putchar('\n');
}

void	print_mid(int width)
{
	int	i;

	i = 0;
	if (width == 1)
	{
		ft_putchar('|');
		ft_putchar('\n');
		return ;
	}
	ft_putchar('|');
	while (i < width - 2)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('|');
	ft_putchar('\n');
}

void	error(void)
{
	char	*str;

	str = "invalid input";
	write(1, str, 20);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
	{
		error();
		return ;
	}
	if (x == 1 && y == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
		return ;
	}
	print_edge(x);
	if (y >= 2)
	{
		while (i < y - 2)
		{
			print_mid(x);
			i++;
		}
		print_edge(x);
	}
}
