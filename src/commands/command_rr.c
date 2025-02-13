/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_rr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:54:35 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/13 15:54:38 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	rra(t_list **stack_a)
{
	int	last_index_num;

	*stack_a = ft_lstlast(*stack_a);
	last_index_num = (*stack_a)->num;
	while ((*stack_a)->pre)
	{
		(*stack_a)->num = (*stack_a)->pre->num;
		*stack_a = (*stack_a)->pre;
	}
	(*stack_a)->num = last_index_num;
	return ;
}

void	rrb(t_list **stack_b)
{
	int	last_index_num;

	*stack_b = ft_lstlast(*stack_b);
	last_index_num = (*stack_b)->num;
	while ((*stack_b)->pre)
	{
		(*stack_b)->num = (*stack_b)->pre->num;
		*stack_b = (*stack_b)->pre;
	}
	(*stack_b)->num = last_index_num;
	return ;
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	return ;
}
