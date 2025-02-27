/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:55:40 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/27 02:26:49 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static t_list	*make_node(const char *arg)
{
	t_list	*node;
	t_list	*new;
	int		num;
	bool	atoi_error;

	node = NULL;
	atoi_error = true;
	while (*arg)
	{
		num = ft_atoi(arg, &atoi_error);
		if (atoi_error == false)
			return (free_stack(&node), NULL);
		new = ft_lstnew(num);
		if (!new)
			return (free_stack(&node), NULL);
		ft_lstadd_back(&node, new);
		while (*arg == 32 || (*arg >= 9 && *arg <= 13))
			arg++;
		while (*arg && *arg != 32 && (*arg < 9 || *arg > 13))
			arg++;
	}
	return (node);
}

t_list	*make_stack_a(int argc, char const *argv[])
{
	t_list	*a;
	t_list	*new_node;
	int		i;

	a = NULL;
	i = 1;
	while (i < argc)
	{
		new_node = make_node(argv[i]);
		if (!new_node)
			return (NULL);
		ft_lstadd_back(&a, new_node);
		i++;
	}
	return (a);
}
