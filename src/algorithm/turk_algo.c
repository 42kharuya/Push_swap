/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 20:17:18 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/25 03:03:53 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdio.h>

//上記２つの条件を満たすコマンド数が一番少なくて済むAを選択してプッシュする

static t_command get_least_operations(t_list *stack)
{
	t_command	least_command;

	least_command = stack->command;
	while (stack)
	{
		if (least_command.all > stack->command.all)
			least_command = stack->command;
		stack = stack->next;
	}
	return (least_command);
}

static void do_command(t_list **a, t_list **b, t_command least_command)
{
	if (least_command.rr || least_command.rrr)
	{
		while (least_command.rr-- > 0)
			rr(a, b);
		while (least_command.rrr-- > 0)
			rrr(a, b);
	}
	if (least_command.ra || least_command.rra)
	{
		while (least_command.ra-- > 0)
			ra(a);
		while (least_command.rra-- > 0)
			rra(a);
	}
	else if(least_command.rb || least_command.rrb)
	{
		while (least_command.rb-- > 0)
			rb(b);
		while (least_command.rrb-- > 0)
			rrb(b);
	}
}

void turk_step_1(t_list **a, t_list **b)
{
	t_command	least_command;

	while (ft_lstsize(*a) > 3)
	{
		command_reset_lst(a);
		calc_operations_step1(a, *b);
		least_command = get_least_operations(*a);
		do_command(a, b, least_command);
		pb(a, b);
	}
	return ;
}

void	turk_step_2(t_list **a, t_list **b)
{
	t_command	least_command;

	while (*b)
	{
		command_reset_lst(b);
		calc_operations_step2(*a, b);
		least_command = get_least_operations(*b);
		do_command(a, b, least_command);
		pa(a, b);
	}
	return ;
}
