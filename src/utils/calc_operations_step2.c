/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_operations_step2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 20:16:51 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/27 03:57:28 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	step2_calc_dst(t_list *a, t_list **b)
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

static void	step2_calc_src(t_list *a, t_list **b)
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
		step2_calc_dst(a, b);
		*b = (*b)->next;
		index++;
	}
	*b = head;
	return ;
}

void	calc_operations_step2(t_list *a, t_list **b)
{
	step2_calc_src(a, b);
	change_to_rr_rrr(b);
	calc_command_all(b);
	return ;
}
