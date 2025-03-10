/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_vali.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinzhang <jinzhang@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 11:05:56 by jinzhang          #+#    #+#             */
/*   Updated: 2025/03/09 17:57:55 by jinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	input_num(char *str)
{
	int	i;

	i = 1;
	if (str[0] == '\0')
	{
		ft_putstr("Error");
		return (0);
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			ft_putstr("Error");
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_input_arg(int argc, char **argv)
{
	char	*value;
	char	*newdict;
	char	*newvalue;

	if (argc < 2 || argc > 3)
	{
		write(1, "Error\n", 7);
	}
	else if (argc == 2)
	{	
		value = argv[1];
		if (input_num(value))
			ft_putstr(value);
	}
	else if (argc == 3)
	{
		newdict = argv[1];
		newvalue = argv[2];
		if (input_num(newvalue))
			ft_putstr(newvalue);
	}
}
