/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trupham <trupham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 09:18:25 by trupham           #+#    #+#             */
/*   Updated: 2025/02/27 09:18:27 by trupham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign_check;
	int	num;

	num = 0;
	i = 0;
	sign_check = 1;
	while (str[i])
	{
		if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13) || str[i] == '+')
			i++;
		else if (str[i] == '-')
		{
			sign_check = sign_check * -1;
			i++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			num = num * 10 + (str[i] - '0');
			i++;
		}
		else
			break ;
	}
	return (num * sign_check);
}
