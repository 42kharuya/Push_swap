/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_r.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:54:27 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/25 20:41:23 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	rotate_a(t_list **a)
{
	int		top_num;
	t_list	*head;

	top_num = (*a)->num;
	head = *a;
	while ((*a)->next)
	{
		(*a)->num = (*a)->next->num;
		*a = (*a)->next;
	}
	(*a)->num = top_num;
	*a = head;
	return ;
}

static void	rotate_b(t_list **b)
{
	int		top_num;
	t_list	*head;

	top_num = (*b)->num;
	head = *b;
	while ((*b)->next)
	{
		(*b)->num = (*b)->next->num;
		*b = (*b)->next;
	}
	(*b)->num = top_num;
	*b = head;
	return ;
}

void	ra(t_list **a)
{
	rotate_a(a);
	ft_putstr_fd("ra\n", 1);
	return ;
}

void	rb(t_list **b)
{
	rotate_b(b);
	ft_putstr_fd("rb\n", 1);
	return ;
}

void	rr(t_list **a, t_list **b)
{
	rotate_a(a);
	rotate_b(b);
	ft_putstr_fd("rr\n", 1);
	return ;
}
