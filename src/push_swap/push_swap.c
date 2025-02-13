/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <kharuya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 18:58:28 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/10 21:41:10 by kharuya          ###   ########.fr       */
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
