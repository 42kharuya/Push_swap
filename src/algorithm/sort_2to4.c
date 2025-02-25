/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2to4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:06:23 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/25 19:46:33 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sort_2(t_list **a)
{
	if ((*a)->num > (*a)->next->num)
		sa(a);
	return ;
}

void	sort_3(t_list **a)
{
	int	index2_num;
	int	index3_num;

	index2_num = (*a)->next->num;
	index3_num = (*a)->next->next->num;
	if ((*a)->num <= index2_num && index2_num <= index3_num)
		return ;
	else if (index2_num <= (*a)->num && (*a)->num <= index3_num)
		sa(a);
	else if (index3_num <= (*a)->num && (*a)->num <= index2_num)
		rra(a);
	else if (index2_num <= index3_num && index3_num <= (*a)->num)
		ra(a);
	else if ((*a)->num <= index3_num && index3_num <= index2_num)
	{
		rra(a);
		sa(a);
	}
	else if (index3_num <= index2_num && index2_num <= (*a)->num)
	{
		sa(a);
		rra(a);
	}
	return ;
}

void	sort_4(t_list **a, t_list **b)
{
	swap_smallest(a, b);
	sort_3(a);
	pa(a, b);
}
