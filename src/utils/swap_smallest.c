/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_smallest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 18:10:53 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/25 18:27:45 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	swap_smallest(t_list **a, t_list **b)
{
	t_list	*head;
	int		smallest_num;

	head = *a;
	smallest_num = (*a)->num;
	*a = (*a)->next;
	while (*a)
	{
		if (smallest_num > (*a)->num)
			smallest_num = (*a)->num;
		*a = (*a)->next;
	}
	*a = head;
	while (1)
	{
		if ((*a)->num == smallest_num)
			break ;
		ra(a);
	}
	pb(a, b);
	return ;
}
