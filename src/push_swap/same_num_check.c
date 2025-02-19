/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   same_num_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:27:35 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/19 17:27:38 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

bool same_num_check(t_list *a)
{
	int		*a_array;
	int		i;
	int		j;

	a_array = lst_into_array(a);
	if(!a_array)
		return (false);
	i = 0;
	while(i < ft_lstsize(a) - 1)
	{
		j = i + 1;
		while (j < ft_lstsize(a))
		{
			if (a_array[j] == a_array[i])
			{
				free (a_array);
				return (false);
			}
			j++;
		}
		i++;
	}
	free (a_array);
	return (true);
}