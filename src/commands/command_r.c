/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_r.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:54:27 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/13 15:54:30 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ra(t_list **stack_a)
{
	int		index1_num;

	index1_num = (*stack_a)->num;
	while ((*stack_a)->next)
	{
		(*stack_a)->num = (*stack_a)->next->num;
		*stack_a = (*stack_a)->next;
	}
	(*stack_a)->num = index1_num;
	*stack_a = ft_lstfirst(*stack_a);
	return ;
}

void	rb(t_list **stack_b)
{
	int		index1_num;

	index1_num = (*stack_b)->num;
	while ((*stack_b)->next)
	{
		(*stack_b)->num = (*stack_b)->next->num;
		*stack_b = (*stack_b)->next;
	}
	(*stack_b)->num = index1_num;
	*stack_b = ft_lstfirst(*stack_b);
	return ;
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	return ;
}
