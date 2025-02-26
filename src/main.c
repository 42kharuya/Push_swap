/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:55:45 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/25 21:15:25 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

int	main(int argc, char const *argv[])
{
	t_list	*a;
	t_list	*b;

	if (argc <= 1)
		return (1);
	if (format_check(argv) == false)
		return (ft_putstr_fd("Error\n", 2));
	a = make_stack_a(argc, argv);
	if (!a || same_num_check(a) == false)
		return (free_stack(&a), ft_putstr_fd("Error\n", 2));
	b = NULL;
	sort_start(&a, &b, ft_lstsize(a));
	return (free_stack(&a), 0);
}
