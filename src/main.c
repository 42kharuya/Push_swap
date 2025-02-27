/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:55:45 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/27 04:32:35 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char const *argv[])
{
	t_list	*a;
	t_list	*b;
	bool	malloc_check;

	if (argc <= 1)
		return (1);
	if (check_error_format(argv) == false)
		return (ft_putstr_fd("Error\n", 2));
	a = make_stack_a(argc, argv);
	if (!a || check_error_samenum(a) == false)
		return (free_stack(&a), ft_putstr_fd("Error\n", 2));
	b = NULL;
	malloc_check = true;
	sort_start(&a, &b, ft_lstsize(a), &malloc_check);
	if (malloc_check == false)
		return (free_stack(&a), ft_putstr_fd("Error\n", 2));
	return (free_stack(&a), 0);
}
