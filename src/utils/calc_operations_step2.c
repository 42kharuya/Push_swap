/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_operations_step2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 20:16:51 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/25 19:16:47 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdio.h>

static void	change_to_rr_rrr(t_list **b)
{
	t_list	*head;

	head = *b;
	while (*b)
	{
		while ((*b)->command.ra > 0 && (*b)->command.rb > 0)
		{
			(*b)->command.rr++;
			(*b)->command.ra--;
			(*b)->command.rb--;
		}
		while ((*b)->command.rra > 0 && (*b)->command.rrb > 0)
		{
			(*b)->command.rrr++;
			(*b)->command.rra--;
			(*b)->command.rrb--;
		}
		*b = (*b)->next;
	}
	*b = head;
	return ;
}

static void	calc_command_all(t_list **b)
{
	t_list	*head;

	head = *b;
	while (*b)
	{
		(*b)->command.all = (*b)->command.ra + (*b)->command.rb \
		+ (*b)->command.rr + (*b)->command.rra + (*b)->command.rrb \
		+ (*b)->command.rrr;
		*b = (*b)->next;
	}
	*b = head;
	return ;
}

static void	count_a_rotate(t_list *a, t_list **b)
{
	int		index;
	int		last_index;
	int		ra_count;
	int		rra_count;

	last_index = ft_lstsize(a) - 1;
	if ((*b)->num > get_max_num(a) || (*b)->num < get_min_num(a))
		index = get_index(a, get_min_num(a));
	else
		index = get_index(a, get_near_more_num(a, (*b)->num));
	ra_count = index;
	rra_count = last_index - index + 1;
	if (ra_count <= rra_count)
		(*b)->command.ra = ra_count;
	else if (ra_count > rra_count)
		(*b)->command.rra = rra_count;
	return ;
}

static void	count_b_rotate(t_list *a, t_list **b)
{
	t_list		*head;
	int			last_index;
	int			index;
	int			rb_count;
	int			rrb_count;

	index = 0;
	last_index = ft_lstsize(*b) - 1;
	head = *b;
	while (index <= last_index)
	{
		rb_count = index;
		rrb_count = last_index - index + 1;
		if (rb_count <= rrb_count)
			(*b)->command.rb = rb_count;
		else if (rb_count > rrb_count)
			(*b)->command.rrb = rrb_count;
		count_a_rotate(a, b);
		*b = (*b)->next;
		index++;
	}
	*b = head;
	return ;
}

void	calc_operations_step2(t_list *a, t_list **b)
{
	count_b_rotate(a, b);
	change_to_rr_rrr(b);
	calc_command_all(b);
	return ;
}
