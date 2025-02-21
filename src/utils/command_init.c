/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 15:35:54 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/21 17:52:26 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_command	command_init(void)
{
	t_command command;

	command.all = 0;
	command.ra = 0;
	command.rb = 0;
	command.rr = 0;
	command.rra = 0;
	command.rrb = 0;
	command.rrr = 0;

	return (command);
}

void	command_reset_lst(t_list **stack)
{
	t_list *head;

	head = *stack;
	while (*stack)
	{
		(*stack)->command.all = 0;
		(*stack)->command.ra = 0;
		(*stack)->command.rb = 0;
		(*stack)->command.rr = 0;
		(*stack)->command.rra = 0;
		(*stack)->command.rrb = 0;
		(*stack)->command.rrr = 0;
		*stack = (*stack)->next;
	}
	*stack = head;
	return ;
}
