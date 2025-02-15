/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:55:52 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/15 18:02:15 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdio.h>

static int get_max_bit(t_list *stack_a)
{
    int max_bit;
    int bit;
    int temp_num;

    max_bit = 0;
    while (stack_a)
    {
        bit = 0;
        temp_num = stack_a->num;
        while (temp_num > 0)
        {
            temp_num /= 2;
            bit++;
        }
        if (max_bit < bit)
            max_bit = bit;
        stack_a = stack_a->next;
    }
    return (max_bit);
}

void    radix_sort(t_list **stack_a, t_list **stack_b)
{
	int max_bit;
	int	lst_size;
	int	i;
	int	j;

	max_bit = get_max_bit(*stack_a);
	lst_size = ft_lstsize(*stack_a);
	i = 0;
	while (i < max_bit)
	{
		j = 0;
		while (j++ < lst_size)
		{
			if (((*stack_a)->num >> i) & 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
		}
		*stack_a = ft_lstfirst(*stack_a);
		while (*stack_b)
			pa(stack_a, stack_b);
		*stack_b = ft_lstfirst(*stack_b);
		i++;
	}
	return ;
}