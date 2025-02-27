/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_operations_step1.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 21:03:01 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/27 03:56:38 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	step1_calc_dst(t_list **a, t_list *b)
{
	int		index;
	int		last_index;
	int		rb_count;
	int		rrb_count;

	last_index = ft_lstsize(b) - 1;
	if ((*a)->num > get_max_num(b) || (*a)->num < get_min_num(b))
		index = get_index(b, get_max_num(b));
	else
		index = get_index(b, get_near_less_num(b, (*a)->num));
	rb_count = index;
	rrb_count = last_index - index + 1;
	if (rb_count <= rrb_count)
		(*a)->command.rb = rb_count;
	else if (rb_count > rrb_count)
		(*a)->command.rrb = rrb_count;
	return ;
}

static void	step1_calc_src(t_list **a, t_list *b)
{
	t_list		*head;
	int			last_index;
	int			index;
	int			ra_count;
	int			rra_count;

	index = 0;
	last_index = ft_lstsize(*a) - 1;
	head = *a;
	while (index <= last_index)
	{
		ra_count = index;
		rra_count = last_index - index + 1;
		if (ra_count <= rra_count)
			(*a)->command.ra = ra_count;
		else if (ra_count > rra_count)
			(*a)->command.rra = rra_count;
		step1_calc_dst(a, b);
		*a = (*a)->next;
		index++;
	}
	*a = head;
	return ;
}

void	calc_operations_step1(t_list **a, t_list *b)
{
	step1_calc_src(a, b);
	change_to_rr_rrr(a);
	calc_command_all(a);
	return ;
}
