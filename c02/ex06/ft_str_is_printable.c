/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trupham <trupham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 08:22:31 by trupham           #+#    #+#             */
/*   Updated: 2025/02/24 08:22:37 by trupham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	check;

	check = 1;
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
		{
			check = 0;
			break ;
		}
		str++;
	}
	return (check);
}
