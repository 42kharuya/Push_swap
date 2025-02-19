/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_into_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:27:24 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/19 17:27:27 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	*lst_into_array(t_list *a)
{
	int		*array;
	int		lst_size;
	int		i;

	lst_size = ft_lstsize(a);
	array = (int *)malloc(sizeof(int) * lst_size);
	if (!array)
		return (NULL);
	i = 0;
	while (i < lst_size)
	{
		array[i] = a->num;
		a = a->next;
		i++;
	}
	return (array);
}
