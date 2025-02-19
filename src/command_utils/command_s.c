/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:54:41 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/16 16:38:27 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sa(t_list **a)
{
	int	tmp;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	tmp = (*a)->num;
	(*a)->num = (*a)->next->num;
	(*a)->next->num = tmp;
	ft_putstr_fd("sa\n", 1);
	return ;
}

void	sb(t_list **b)
{
	int	tmp;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	tmp = (*b)->num;
	(*b)->num = (*b)->next->num;
	(*b)->next->num = tmp;
	ft_putstr_fd("sb\n", 1);
	return ;
}

void	ss(t_list **a, t_list **b)
{
	sa (a);
	sb (b);
	ft_putstr_fd("ss\n", 1);
	return ;
}
