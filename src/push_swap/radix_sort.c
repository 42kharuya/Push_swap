/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:55:52 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/13 20:17:36 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdio.h>

static int	get_max_bit(int num)
{
	int max_bit;

	max_bit = 0;
	while (num > 0)
	{
		num /= 2;
		max_bit++;
	}
	return (max_bit);
}

void    radix_sort(t_list **stack_a, t_list **stack_b)
{
	while ()
	{

	}
}