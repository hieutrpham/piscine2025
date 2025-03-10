/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trupham <trupham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 08:39:26 by trupham           #+#    #+#             */
/*   Updated: 2025/02/20 08:39:58 by trupham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a, char b, char c, int d)
{
	char	s;
	char	l;

	s = 44;
	l = 32;
	if (d == 0)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
	}
	if (d == 1)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		write(1, &s, 1);
		write(1, &l, 1);
	}
}

void	ft_putchar_condition(char a, char b, char c)
{
	if (a == 55 && b == 56 && c == 57)
	{
		ft_putchar(a, b, c, 0);
	}
	else
	{
		ft_putchar(a, b, c, 1);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 48;
	b = 49;
	c = 50;
	while (a <= 55)
	{
		b = a + 1;
		while (b <= 56)
		{
			c = b + 1;
			while (c <= 57)
			{
				ft_putchar_condition(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
