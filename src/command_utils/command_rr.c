/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_rr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:54:35 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/23 20:30:06 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	rra(t_list **a)
{
	int		last_index_num;

	*a = ft_lstlast(*a);
	last_index_num = (*a)->num;
	while ((*a)->pre != NULL)
	{
		(*a)->num = (*a)->pre->num;
		*a = (*a)->pre;
	}
	(*a)->num = last_index_num;
	ft_putstr_fd("rra\n", 1);
	return ;
}

void	rrb(t_list **b)
{
	int		last_index_num;

	*b = ft_lstlast(*b);
	last_index_num = (*b)->num;
	while ((*b)->pre != NULL)
	{
		(*b)->num = (*b)->pre->num;
		*b = (*b)->pre;
	}
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
