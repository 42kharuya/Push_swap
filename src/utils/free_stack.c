/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 16:44:46 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/25 17:48:17 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdio.h>

int	free_stack(t_list **stack)
{
	t_list	*tmp;

	if (!*stack)
		return (0);
	while (*stack)
	{
		// printf ("stack num:%d\n", (*stack)->num);
		tmp = (*stack)->next;
		free (*stack);
		*stack = tmp;
	}
	return (0);
}
