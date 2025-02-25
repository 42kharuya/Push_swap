/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 15:35:54 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/25 20:28:23 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	command_init(t_list **stack)
{
	(*stack)->command.all = 0;
	(*stack)->command.ra = 0;
	(*stack)->command.rb = 0;
	(*stack)->command.rr = 0;
	(*stack)->command.rra = 0;
	(*stack)->command.rrb = 0;
	(*stack)->command.rrr = 0;
	return ;
}

void	command_reset_lst(t_list **a, t_list **b)
{
	t_list	*a_head;
	t_list	*b_head;

	a_head = *a;
	while (*a)
	{
		command_init(a);
		*a = (*a)->next;
	}
	*a = a_head;
	b_head = *b;
	while (*b)
	{
		command_init(b);
		*b = (*b)->next;
	}
	*b = b_head;
	return ;
}
