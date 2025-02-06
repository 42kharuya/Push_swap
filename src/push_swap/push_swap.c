/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <kharuya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 18:58:28 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/06 18:58:31 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdio.h>

t_list make_stack_a(char const *argv[])
{
	t_list	stack_a;
	int		num;

	stack_a = ft_lstnew();
	while (*argv)
	{
		num = ft_atoi(*argv);
		stack_a
	}
}

int main (int argc, char const *argv[])
{
	t_list stack_a;

	stack_a = make_stack_a(argv);
}