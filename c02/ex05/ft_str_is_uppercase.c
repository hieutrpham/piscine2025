/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trupham <trupham@student.hive.fi>			+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:05:42 by trupham           #+#    #+#             */
/*   Updated: 2025/02/23 17:05:44 by trupham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	check;

	check = 1;
	while (*str != '\0')
	{
		if (*str < 65 || *str > 90)
		{
			check = 0;
			break ;
		}
		str++;
	}
	return (check);
}
