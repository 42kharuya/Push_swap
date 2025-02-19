/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:55:45 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/19 16:32:37 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdio.h>

int main (int argc, char const *argv[])
{
	t_list	*a;
	t_list	*b;

	if (argc <= 1)
		return (1);
	if (format_check(argv) == false)
		return (ft_putstr_fd("Error\n", 2));
	a = make_stack_a(argc, argv);
	if (!a || same_num_check(a) == false)
		return (ft_putstr_fd("Error\n", 2));
	b = NULL;
	sort_start(&a, &b, ft_lstsize(a));
	return (free_stack(&a));
}

// int main (int argc, char const *argv[])
// {
// 	t_list	*a;
// 	t_list	*b;
// 	t_list	*a_cpy;
// 	t_list	*b_cpy;
// 	t_list	*tmp;

// 	if (argc == 1)
// 		return (0);
// 	a = make_a(--argc, argv);
// 	if (!a)
// 	{
// 		ft_putstr_fd("Error\n", 1);
// 		return (0);
// 	}

// 	//tester
// 	a_cpy = a;
// 	b= NULL;
// 	b_cpy = b;
// 	printf("a\n");
// 	while (a)
// 	{
// 		printf("index:%d num:%d\n", a->index, a->num);
// 		a = a->next;
// 	}
// 	printf("b\n");
// 	while (b)
// 	{
// 		printf("index:%d num:%d\n", b->index, b->num);
// 		b = b->next;
// 	}
// 	compress(&a_cpy);
// 	radix_sort(&a_cpy, &b_cpy);
// 	printf("a\n");
// 	while (a_cpy)
// 	{
// 		printf("index:%d num:%d\n", a_cpy->index, a_cpy->num);
// 		tmp = a_cpy->next;
// 		free (a_cpy);
// 		a_cpy = tmp;
// 	}
// 	printf("b\n");
// 	while (b_cpy)
// 	{
// 		printf("index:%d num:%d\n", b_cpy->index, b_cpy->num);
// 		tmp = b_cpy->next;
// 		free (b_cpy);
// 		b_cpy = tmp;
// 	}
// 	return (0);
// }
