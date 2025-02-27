/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_already_sorted.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 01:43:35 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/27 01:52:14 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

bool	check_already_sorted(t_list *a)
{
	while (a->next)
	{
		if (a->num > a->next->num)
			return (false);
		a = a->next;
	}
	return (true);
}
