/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_or_more.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:11:32 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/27 17:28:55 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	chose_ra_or_rra(t_list **a)
{
	int	index;
	int	last_index;
	int	ra_count;
	int	rra_count;

	index = get_index(*a, get_min_num(*a));
	last_index = ft_lstsize(*a) - 1;
	ra_count = index;
	rra_count = last_index - index + 1;
	if (ra_count <= rra_count)
	{
		while (ra_count-- > 0)
			ra(a);
	}
	else if (ra_count > rra_count)
	{
		while (rra_count-- > 0)
			rra(a);
	}
	return ;
}

void	sort_5_or_more(t_list **a, t_list **b, bool *malloc_check)
{
	pb(a, b, malloc_check);
	if (*malloc_check == false)
		return ;
	pb(a, b, malloc_check);
	if (*malloc_check == false)
		return ;
	turk_step_1(a, b, malloc_check);
	if (*malloc_check == false)
		return ;
	sort_3(a);
	turk_step_2(a, b, malloc_check);
	if (*malloc_check == false)
		return ;
	chose_ra_or_rra(a);
	return ;
}
