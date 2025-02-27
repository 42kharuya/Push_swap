/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_start.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:11:10 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/27 16:11:14 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sort_start(t_list **a, t_list **b, int lst_size, bool *malloc_check)
{
	if (lst_size == 1 || check_already_sorted(*a) == true)
		return ;
	else if (lst_size == 2)
		sort_2(a);
	else if (lst_size == 3)
		sort_3(a);
	else if (lst_size == 4)
		sort_4(a, b, malloc_check);
	else
		sort_5_or_more(a, b, malloc_check);
	return ;
}
