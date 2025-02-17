/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compress.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:55:34 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/16 16:38:42 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

//mallocのエラー処理問題
static int	*lst_into_array(t_list *a, int *array, int max_index)
{
	int i;

	i = 0;
	while (i <= max_index)
	{
		array[i] = a->num;
		a = a->next;
		i++;
	}
	return (array);
}

static int	*bubble_sort(int *array, int max_index)
{
	int i;
	int tmp;

	while (max_index > 0)
	{
		i = 0;
		while (i + 1 <= max_index)
		{
			if (array[i + 1] < array[i])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
			}
			i++;
		}
		max_index--;
	}
	return (array);
}

static void	value_mapping(t_list **a, int *array, int max_index)
{
	t_list	*head;
	int		i;

	head = *a;
	while (*a)
	{
		i = 0;
		while (i <= max_index)
		{
			if ((*a)->num == array[i])
			{
				(*a)->num = i;
				break;
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
	int		lst_size;

	lst_size = ft_lstsize(*a);
	array = (int *)malloc(sizeof(int) * lst_size);
	if (!array)
		return ;
	array = lst_into_array(*a, array, lst_size - 1);
	array = bubble_sort(array, lst_size - 1);
	value_mapping(a, array, lst_size - 1);
	return ;
}
