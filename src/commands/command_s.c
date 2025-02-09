/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <kharuya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 18:58:23 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/10 06:47:14 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sa(t_list **stack_a)
{
	int	tmp;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	tmp = (*stack_a)->num;
	(*stack_a)->num = (*stack_a)->next->num;
	(*stack_a)->next->num = tmp;
	return ;
}

void	sb(t_list **stack_b)
{
	int	tmp;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	tmp = (*stack_b)->num;
	(*stack_b)->num = (*stack_b)->next->num;
	(*stack_b)->next->num = tmp;
	return ;
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	sa (stack_a);
	sb (stack_b);
	return ;
}
