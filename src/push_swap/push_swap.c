/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:55:45 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/15 17:50:09 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdio.h>

int main (int argc, char const *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_list	*stack_a_cpy;
	t_list	*stack_b_cpy;
	t_list	*tmp;

	if (argc == 1)
		return (0);
	stack_a = make_stack_a(--argc, argv);
	if (!stack_a)
	{
		ft_putstr_fd("Error\n", 1);
		return (0);
	}

	//tester
	stack_a_cpy = stack_a;
	stack_b= NULL;
	stack_b_cpy = stack_b;
	printf("stack_a\n");
	while (stack_a)
	{
		printf("index:%d num:%d\n", stack_a->index, stack_a->num);
		stack_a = stack_a->next;
	}
	printf("stack_b\n");
	while (stack_b)
	{
		printf("index:%d num:%d\n", stack_b->index, stack_b->num);
		stack_b = stack_b->next;
	}
	compress(&stack_a_cpy);
	radix_sort(&stack_a_cpy, &stack_b_cpy);
	printf("stack_a\n");
	while (stack_a_cpy)
	{
		printf("index:%d num:%d\n", stack_a_cpy->index, stack_a_cpy->num);
		tmp = stack_a_cpy->next;
		free (stack_a_cpy);
		stack_a_cpy = tmp;
	}
	printf("stack_b\n");
	while (stack_b_cpy)
	{
		printf("index:%d num:%d\n", stack_b_cpy->index, stack_b_cpy->num);
		tmp = stack_b_cpy->next;
		free (stack_b_cpy);
		stack_b_cpy = tmp;
	}
	return (0);
}
