/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_operations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 20:16:51 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/19 20:16:52 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void count_b_rotate(t_list **from, t_list *to, int (*get_num)(t_list *stack, int _num))
{
	int		index;
	int		last_index;
	int		rb_count;
	int		rrb_count;

	last_index = ft_lstsize(to) - 1;
	if ((*from)->num > get_max_num(to) || (*from)->num < get_min_num(to))
		index = get_index(to, get_max_num(to));
	else
		index = get_near_num(to, (*from)->num, get_num);
	rb_count = index;
	rrb_count = last_index - index -1;
	if (rb_count <= rrb_count)
		(*from)->command.rb = rb_count;
	else if (rb_count > rrb_count)
		(*from)->command.rrb = rrb_count;
	return ;
}


static void count_a_rotate(t_list **from, t_list *to, int (*get_num)(t_list *stack, int _num))
{
	t_list		*head;
	int			last_index;
	int			index;
	int			ra_count;
	int			rra_count;

	index = 0;
	last_index = ft_lstsize(*from) - 1;
	head = *from;
	while (index <= last_index)
	{
		ra_count = index;
		rra_count = last_index - index + 1;
		if (ra_count <= rra_count)
			(*from)->command.ra = ra_count;
		else if (ra_count > rra_count)
			(*from)->command.rra = rra_count;
		count_b_rotate(from, to, get_num);
		*from = (*from)->next;
		index++;
	}
	*from = head;
	return ;
}


static void change_to_rr_rrr(t_list **from)
{
	while ((*from)->command.ra && (*from)->command.rb)
	{
		(*from)->command.rr++;
		(*from)->command.ra--;
		(*from)->command.rb--;
	}
	while ((*from)->command.rra && (*from)->command.rrb)
	{
		(*from)->command.rrr++;
		(*from)->command.rra--;
		(*from)->command.rrb--;
	}
	return ;
}

static void calc_command_all(t_list **from)
{
	(*from)->command.all = (*from)->command.ra + (*from)->command.rb + (*from)->command.rr \
	+ (*from)->command.rra + (*from)->command.rrb + (*from)->command.rrr;
	return ;
}

void calc_operations(t_list **from, t_list *to, int (*get_num)(t_list *stack, int _num))
{
	count_a_rotate(from, to, get_num);
	change_to_rr_rrr(from);
	calc_command_all(from);
	return ;
}
