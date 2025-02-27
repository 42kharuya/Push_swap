/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 19:49:37 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/27 04:30:09 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

bool	check_error_format(char const *argv[])
{
	int		i;
	int		j;

	i = 0;
	while (argv[++i])
	{
		j = 0;
		while (argv[i][j])
		{
			while (argv[i][j] == 32 || (argv[i][j] >= 9 && argv[i][j] <= 13))
				j++;
			if (argv[i][j] == '+' || argv[i][j] == '-')
				j++;
			if (!argv[i][j])
				return (false);
			while (argv[i][j] && argv[i][j] != 32 && (argv[i][j] < 9 \
			|| argv[i][j] > 13))
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
					return (false);
				j++;
			}
		}
	}
	return (true);
}

bool	check_error_samenum(t_list *a)
{
	int		*a_array;
	int		i;
	int		j;

	a_array = lst_into_array(a);
	if (!a_array)
		return (false);
	i = 0;
	while (i < ft_lstsize(a) - 1)
	{
		j = i + 1;
		while (j < ft_lstsize(a))
		{
			if (a_array[j] == a_array[i])
				return (free (a_array), false);
			j++;
		}
		i++;
	}
	return (free (a_array), true);
}
