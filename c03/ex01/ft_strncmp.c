/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trupham <trupham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:30:22 by trupham           #+#    #+#             */
/*   Updated: 2025/02/24 11:30:48 by trupham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	sum;
	unsigned int	i;

	sum = 0;
	i = 0;
	while (i < n && *s1 >= 0)
	{
		while (i < n && *s2 >= 0)
		{
			sum = *s1 - *s2;
			if (sum == 0 && (*s1 + *s2) != 0)
			{
				s2++;
				s1++;
				i++;
			}
			else
				return (sum);
		}
	}
	return (sum);
}
