/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trupham <trupham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 16:41:01 by trupham           #+#    #+#             */
/*   Updated: 2025/02/23 16:41:03 by trupham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	check;

	check = 1;
	while (*str != '\0')
	{
		if (*str < 48 || *str > 57)
		{
			check = 0;
			break ;
		}
		str++;
	}
	return (check);
}
