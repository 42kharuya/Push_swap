/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:54:41 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/25 20:49:34 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	swap_a(t_list **a)
{
	int	tmp;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	tmp = (*a)->num;
	(*a)->num = (*a)->next->num;
	(*a)->next->num = tmp;
	return ;
}

static void	swap_b(t_list **b)
{
	int	tmp;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	tmp = (*b)->num;
	(*b)->num = (*b)->next->num;
	(*b)->next->num = tmp;
	return ;
}

void	sa(t_list **a)
{
	swap_a(a);
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_list **b)
{
	swap_a(b);
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_list **a, t_list **b)
{
	swap_a(a);
	swap_b(b);
	ft_putstr_fd("ss\n", 1);
	return ;
}
