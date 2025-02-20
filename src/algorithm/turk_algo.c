/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 20:17:18 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/20 19:35:31 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

//上記２つの条件を満たすコマンド数が一番少なくて済むAを選択してプッシュする

void ra_to_least_operaion(t_list **stack, void (*rotate)(t_list **stack))
{
	t_list	*head;
	int		least_command;

	head = *stack;
	least_command = (*stack)->command.all;
	while (*stack)
	{
		if (least_command > (*stack)->command.all)
			least_command = (*stack)->command.all;
		*stack = (*stack)->next;
	}
	*stack = head;
	while ((*stack)->command.all != least_command)
		rotate(stack);
	return ;
}

void turk_step_1(t_list **a, t_list **b)
{
	while (ft_lstsize(*a) <= 3)
	{
		command_reset(a);
		calc_operations(a, *b, get_near_less_num);
		ra_to_least_operaion(a, ra);
		if ((*a)->num >= get_max_num(*b) || (*a)->num <= get_min_num(*b))
		{
			while ((*b)->num != get_max_num(*b))
				rb(b);
			pb(a, b);
			if ((*b)->num != get_min_num(*b))
				rb(b);
		}
		else
		{
			while ((*b)->num != get_near_less_num(*b, (*a)->num))
				rb(b);
			pb(a,b);
		}
	}
}

void	turk_step_2(t_list **a, t_list **b)
{
	while (*b)
	{
		command_reset(b);
		calc_operations(b, *a, get_near_more_num);
		ra_to_least_operaion(b, rb);
		if ((*b)->num >= get_max_num(*a) || (*b)->num <= get_min_num(*a))
		{
			while ((*a)->num != get_min_num(*a))
				ra(a);
			pa(a, b);
			if ((*b)->num != get_min_num(*b))
				ra(a);
		}
		else
		{
			while ((*a)->num != get_near_more_num(*a, (*b)->num))
					rb(a);
			pa(a,b);
		}
	}
}
