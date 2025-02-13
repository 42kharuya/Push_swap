/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:55:45 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/13 15:55:48 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdio.h>

int main (int argc, char const *argv[])
{
	t_list	*stack_a;
	// t_list	*stack_b;
	t_list	*stack_a_cpy;
	// t_list	*stack_b_cpy;
	t_list	*tmp;

	if (argc == 1)
		return (0);
	stack_a = make_stack_a(--argc, argv);
	if (!stack_a)
	{
		ft_putstr_fd("Error\n", 1);
		return (0);
	}

	return (0);
}
