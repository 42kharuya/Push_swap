/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:55:40 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/16 16:42:08 by kharuya          ###   ########.fr       */
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
	t_list	*a;
	t_list	*new_node;

	if (format_check(argv[index]) == false)
		return (NULL);
	a = ft_lstnew(index, ft_atoi(argv[index]));
	if (!a)
		return (NULL);
	while (--index > 0)
	{
		if (format_check(argv[index]) == false)
			return (NULL);
		new_node = ft_lstnew(index, ft_atoi(argv[index]));
		if (!new_node)
			return (NULL);
		ft_lstadd_front(&a, new_node);
	}
	return (a);
}