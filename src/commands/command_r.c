/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_r.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:54:27 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/16 16:38:04 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ra(t_list **a)
{
	int		index1_num;
	t_list	*head;

	index1_num = (*a)->num;
	head = *a;
	while ((*a)->next)
	{
		(*a)->num = (*a)->next->num;
		*a = (*a)->next;
	}
	(*a)->num = index1_num;
	*a = head;
	ft_putstr_fd("ra\n", 1);
	return ;
}

void	rb(t_list **b)
{
	int		index1_num;
	t_list	*head;

	index1_num = (*b)->num;
	head = *b;
	while ((*b)->next)
	{
		(*b)->num = (*b)->next->num;
		*b = (*b)->next;
	}
	(*b)->num = index1_num;
	*b = head;
	ft_putstr_fd("rb\n", 1);
	return ;
}

void	rr(t_list **a, t_list **b)
{
	ra(a);
	rb(b);
	ft_putstr_fd("rr\n", 1);
	return ;
}
