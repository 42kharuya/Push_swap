/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5to20.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:06:32 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/19 20:04:32 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static int	get_min_num(t_list *stack)
{
	int min_num;

	min_num = stack->num;
	while(stack)
	{
		if (min_num > stack->num)
			min_num = stack->num;
		stack = stack->next;
	}
	return (min_num);
}

static int	get_max_num(t_list *stack)
{
	int max_num;

	max_num = stack->num;
	while(stack)
	{
		if (max_num < stack->num)
			max_num = stack->num;
		stack = stack->next;
	}
	return (max_num);
}

void push_to_b(t_list **a, t_list **b)
{
	int near_less_num;

	while (ft_lstsize(*a) <= 3)
	{
		if ((*a)->num >= get_max_num(*b) || (*a)->num <= get_min_num(*b))
		{
			while ((*b)->num != get_max_num(*b))
				rb(b);
			pb(a, b);
			if ((*b)->num == get_min_num(*b))
				rb(b);
		}
		else
		{
			while ()
		}
	}
}

static void	push_to_b(t_list **a, t_list **b)
{
	if ((*b)->num >= get_max_num(*a) || (*b)->num <= get_min_num(*a))
	{
		while ((*a)->num != get_min_num(*a))
			ra(a);
		pa(a, b);
		ra(a);
	}
}

void sort_5to20(t_list **a, t_list **b)
{
	int near_less_num;
	int near_more_num;

	pb(a, b);
	pb(a, b);
	sort_3(a);
}