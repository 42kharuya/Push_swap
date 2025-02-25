/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:17:31 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/25 21:00:23 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdio.h>

void	sort_start(t_list **a, t_list **b, int lst_size)
{
	if (lst_size == 1)
		return ;
	else if (lst_size == 2)
		sort_2(a);
	else if (lst_size == 3)
		sort_3(a);
	else if (lst_size == 4)
		sort_4(a, b);
	else
		sort_5to20(a, b);
	return ;
}
