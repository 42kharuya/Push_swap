/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compress.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:55:34 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/25 22:15:40 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

//mallocのエラー処理問題
static int	*bubble_sort(int *array, int lst_size)
{
	int	i;
	int	tmp;

	while (lst_size > 1)
	{
		i = 0;
		while (i + 1 < lst_size)
		{
			if (array[i + 1] < array[i])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
			}
			i++;
		}
		lst_size--;
	}
	return (array);
}

static void	value_mapping(t_list **a, int *array, int lst_size)
{
	t_list	*head;
	int		i;

	head = *a;
	while (*a)
	{
		i = 0;
		while (i < lst_size)
		{
			if ((*a)->num == array[i])
			{
				(*a)->num = i;
				break ;
			}
			i++;
		}
		*a = (*a)->next;
	}
	*a = head;
	return ;
}

void	compress(t_list **a)
{
	int		*array;

	array = lst_into_array(*a);
	if (!array)
		return ;
	array = bubble_sort(array, ft_lstsize(*a));
	value_mapping(a, array, ft_lstsize(*a));
	free (array);
	return ;
}
