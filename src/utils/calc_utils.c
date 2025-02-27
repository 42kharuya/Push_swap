/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 03:48:18 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/27 17:28:57 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	change_to_rr_rrr(t_list **b)
{
	t_list	*head;

	head = *b;
	while (*b)
	{
		while ((*b)->command.ra > 0 && (*b)->command.rb > 0)
		{
			(*b)->command.rr++;
			(*b)->command.ra--;
			(*b)->command.rb--;
		}
		while ((*b)->command.rra > 0 && (*b)->command.rrb > 0)
		{
			(*b)->command.rrr++;
			(*b)->command.rra--;
			(*b)->command.rrb--;
		}
		*b = (*b)->next;
	}
	*b = head;
	return ;
}

void	calc_command_all(t_list **b)
{
	t_list	*head;

	head = *b;
	while (*b)
	{
		(*b)->command.all = (*b)->command.ra + (*b)->command.rb \
		+ (*b)->command.rr + (*b)->command.rra + (*b)->command.rrb \
		+ (*b)->command.rrr;
		*b = (*b)->next;
	}
	*b = head;
	return ;
}
