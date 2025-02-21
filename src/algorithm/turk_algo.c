/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 20:17:18 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/21 18:01:46 by kharuya          ###   ########.fr       */
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
			rrr(a,b);
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
		calc_operations(a, *b, get_near_less_num);
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
		calc_operations(b, *a, get_near_more_num);
		least_command = get_least_operations(*b);
		do_command(a, b, least_command);
		pa(a, b);
	}
	return ;
}


// void turk_step_1(t_list **a, t_list **b)
// {
// 	while (ft_lstsize(*a) <= 3)
// 	{
// 		command_reset(a);
// 		calc_operations(a, *b, get_near_less_num);
// 		ra_to_least_operaion(a, ra);
// 		if ((*a)->num >= get_max_num(*b) || (*a)->num <= get_min_num(*b))
// 		{
// 			while ((*b)->num != get_max_num(*b))
// 				rb(b);
// 			pb(a, b);
// 			if ((*b)->num != get_min_num(*b))
// 				rb(b);
// 		}
// 		else
// 		{
// 			while ((*b)->num != get_near_less_num(*b, (*a)->num))
// 				rb(b);
// 			pb(a,b);
// 		}
// 	}
// }

// void	turk_step_2(t_list **a, t_list **b)
// {
// 	while (*b)
// 	{
// 		command_reset(b);
// 		calc_operations(b, *a, get_near_more_num);
// 		ra_to_least_operaion(b, rb);
// 		if ((*b)->num >= get_max_num(*a) || (*b)->num <= get_min_num(*a))
// 		{
// 			while ((*a)->num != get_min_num(*a))
// 				ra(a);
// 			pa(a, b);
// 			if ((*b)->num != get_min_num(*b))
// 				ra(a);
// 		}
// 		else
// 		{
// 			while ((*a)->num != get_near_more_num(*a, (*b)->num))
// 					rb(a);
// 			pa(a,b);
// 		}
// 	}
// }
