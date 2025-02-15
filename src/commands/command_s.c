/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:54:41 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/14 16:19:17 by kharuya          ###   ########.fr       */
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
	ft_putstr_fd("sa\n", 1);
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
	ft_putstr_fd("sb\n", 1);
	return ;
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	sa (stack_a);
	sb (stack_b);
	ft_putstr_fd("ss\n", 1);
	return ;
}
