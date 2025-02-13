/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <kharuya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 22:45:50 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/07 17:19:44 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

// "  43 43"などの場合にこれを整数として扱って良いのか問題
static bool format_check(char const *str)
{
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
		str++;
	while (*str)
	{
		if (*str < 48 || *str > 57)
			return (false);
		str++;
	}
	return (true);
}

t_list *make_stack_a(int index, char const *argv[])
{
	t_list	*stack_a;
	t_list	*new_node;

	if (format_check(argv[index]) == false)
		return (NULL);
	stack_a = ft_lstnew(index, ft_atoi(argv[index]));
	if (!stack_a)
		return (NULL);
	while (--index > 0)
	{
		if (format_check(argv[index]) == false)
			return (NULL);
		new_node = ft_lstnew(index, ft_atoi(argv[index]));
		if (!new_node)
			return (NULL);
		ft_lstadd_front(&stack_a, new_node);
	}
	return (stack_a);
}