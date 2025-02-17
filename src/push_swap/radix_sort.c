/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:55:52 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/16 16:39:48 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdio.h>

static int get_max_bit(t_list *a)
{
    int max_bit;
    int bit;
    int temp_num;

    max_bit = 0;
    while (a)
    {
        bit = 0;
        temp_num = a->num;
        while (temp_num > 0)
        {
            temp_num /= 2;
            bit++;
        }
        if (max_bit < bit)
            max_bit = bit;
        a = a->next;
    }
    return (max_bit);
}

void    radix_sort(t_list **a, t_list **b)
{
	int		max_bit;
	int		lst_size;
	int		i;
	int		j;

	max_bit = get_max_bit(*a);
	lst_size = ft_lstsize(*a);
	i = 0;
	while (i < max_bit)
	{
		j = 0;
		while (j++ < lst_size)
		{
			if (((*a)->num >> i) & 1)
				ra(a);
			else
				pb(a, b);
		}
		while (*b)
			pa(a, b);
		i++;
	}
	return ;
}