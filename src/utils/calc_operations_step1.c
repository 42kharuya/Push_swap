/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_operations_step1.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 21:03:01 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/25 19:16:10 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdio.h>

//明日の予定→rrrやrrの実装をする
static void	change_to_rr_rrr(t_list **a)
{
	t_list	*head;

	head = *a;
	while (*a)
	{
		while ((*a)->command.ra > 0 && (*a)->command.rb > 0)
		{
			(*a)->command.rr++;
			(*a)->command.ra--;
			(*a)->command.rb--;
		}
		while ((*a)->command.rra > 0 && (*a)->command.rrb > 0)
		{
			(*a)->command.rrr++;
			(*a)->command.rra--;
			(*a)->command.rrb--;
		}
		*a = (*a)->next;
	}
	*a = head;
	return ;
}

static void	calc_command_all(t_list **a)
{
	t_list	*head;

	head = *a;
	while (*a)
	{
		(*a)->command.all = (*a)->command.ra + (*a)->command.rb \
		+ (*a)->command.rr + (*a)->command.rra + (*a)->command.rrb \
		+ (*a)->command.rrr;
		*a = (*a)->next;
	}
	*a = head;
	return ;
}

static void	count_b_rotate(t_list **a, t_list *b)
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

static void	count_a_rotate(t_list **a, t_list *b)
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
		count_b_rotate(a, b);
		*a = (*a)->next;
		index++;
	}
	*a = head;
	return ;
}

void	calc_operations_step1(t_list **a, t_list *b)
{
	count_a_rotate(a, b);
	change_to_rr_rrr(a);
	calc_command_all(a);
	return ;
}
