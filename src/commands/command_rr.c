/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_rr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:54:35 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/16 19:22:16 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	rra(t_list **a)
{
	int		last_index_num;
	t_list	*head;

	head = *a;
	while ((*a)->next)
	{
		(*a)->next->num = (*a)->num;
		*a = (*a)->next;
	}
	last_index_num = (*a)->num;
	*a = head;
	(*a)->num = last_index_num;
	ft_putstr_fd("rra\n", 1);
	return ;
}

void	rrb(t_list **b)
{
	int		last_index_num;
	t_list	*head;

	head = *b;
	while ((*b)->next)
	{
		(*b)->next->num = (*b)->num;
		*b = (*b)->next;
	}
	last_index_num = (*b)->num;
	*b = head;
	(*b)->num = last_index_num;
	ft_putstr_fd("rrb\n", 1);
	return ;
}

void	rrr(t_list **a, t_list **b)
{
	rra(a);
	rrb(b);
	ft_putstr_fd("rrr\n", 1);
	return ;
}
