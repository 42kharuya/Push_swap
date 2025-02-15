/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:54:19 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/15 19:32:05 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdio.h>

//コマンドの返り値をvoid型にしてしまうとmallocの割り当て失敗時のエラー処理などが実装できない。
static void	push_and_rewrite(t_list **stack, t_list *stack_top)
{
	if (!(*stack))
	{
		*stack = ft_lstnew(1, stack_top->num);
		return ;
	}
	else
		ft_lstadd_front(stack, stack_top);
	*stack = (*stack)->next;
	while (*stack)
	{
		(*stack)->index = (*stack)->index + 1;
		*stack = (*stack)->next;
	}
	*stack = ft_lstfirst(*stack);
	return ;
}

static t_list	*pop_and_rewrite(t_list **stack)
{
	t_list	*stack_top;
	t_list	*tmp;
	t_list	*head;

	stack_top = ft_lstnew((*stack)->index, (*stack)->num);
	tmp = (*stack)->next;
	free(*stack);
	*stack = tmp;
	head = *stack;
	while (*stack)
	{
		(*stack)->index = (*stack)->index - 1;
		*stack = (*stack)->next;
	}
	*stack = head;
	return (stack_top);
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*stack_b_top;

	if (!(*stack_b))
		return ;
	stack_b_top = pop_and_rewrite(stack_b);
	push_and_rewrite(stack_a, stack_b_top);
	ft_putstr_fd("pa\n", 1);
	return ;
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*stack_a_top;

	if (!(*stack_a))
		return ;
	stack_a_top = pop_and_rewrite(stack_a);
	push_and_rewrite(stack_b, stack_a_top);
	ft_putstr_fd("pb\n", 1);
	return ;
}
