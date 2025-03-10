/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trupham <trupham@student.hive.c>			+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 16:55:36 by trupham           #+#    #+#             */
/*   Updated: 2025/02/23 16:55:38 by trupham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	check;

	check = 1;
	while (*str != '\0')
	{
		if (*str < 97 || *str > 122)
		{
			check = 0;
			break ;
		}
		str++;
	}
	return (check);
}
