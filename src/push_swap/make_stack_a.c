/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:55:40 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/18 17:40:55 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdio.h>

static bool format_check(char const *arg)
{
	while (*arg == 32 || (*arg >= 9 && *arg <= 13))
		arg++;
	while (*arg == '+' || *arg == '-')
		arg++;
	while (*arg && *arg != 32 && (*arg < 9 || *arg > 13))
	{
		if (*arg < 48 || *arg > 57)
			return (false);
		arg++;
	}
	return (true);
}

static t_list *make_node(const char *arg, bool *error_check)
{
	t_list	*node;
	int		num;

	node = NULL;
	while (*arg)
	{
		if (format_check(arg) == false)
		{
			free_stack(&node);
			return (NULL);
		}
		num = ft_atoi(arg, error_check);
		if (*error_check == false)
		{
			free_stack(&node);
			return (NULL);
		}
		ft_lstadd_back(&node, ft_lstnew(num));
		while (*arg == 32 || (*arg >= 9 && *arg <= 13))
			arg++;
		while (*arg && *arg != 32 && (*arg < 9 || *arg > 13))
			arg++;
	}
	return (node);
}

t_list *make_stack_a(int argc, char const *argv[], bool *error_check)
{
	t_list	*a;
	t_list	*new_node;
	int		i;

	a = NULL;
	i = 1;
	while (i < argc)
	{
		new_node = make_node(argv[i], error_check);
		if (!new_node)
			return (NULL);
		ft_lstadd_back(&a, new_node);
		i++;
	}
	return (a);
}
