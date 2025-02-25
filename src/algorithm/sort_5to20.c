/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5to20.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:06:32 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/25 19:22:46 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sort_5to20(t_list **a, t_list **b)
{
	pb(a, b);
	pb(a, b);
	turk_step_1(a, b);
	sort_3(a);
	turk_step_2(a, b);
	while ((*a)->num != get_min_num(*a))
		ra(a);
}
