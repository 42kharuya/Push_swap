/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:54:19 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/17 14:26:45 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

//コマンドの返り値をvoid型にしてしまうとmallocの割り当て失敗時のエラー処理などが実装できない。
static void	push_and_rewrite(t_list **stack, t_list *stack_top)
{
	if (!(*stack))
	{
		*stack = ft_lstnew(stack_top->num);
		return ;
	}
	else
		ft_lstadd_front(stack, stack_top);
	return ;
}

static t_list	*pop_and_rewrite(t_list **stack)
{
	t_list	*stack_top;
	t_list	*tmp;

	stack_top = ft_lstnew((*stack)->num);
	tmp = (*stack)->next;
	free(*stack);
	*stack = tmp;
	return (stack_top);
}

void	pa(t_list **a, t_list **b)
{
	t_list	*b_top;

	if (!(*b))
		return ;
	b_top = pop_and_rewrite(b);
	push_and_rewrite(a, b_top);
	ft_putstr_fd("pa\n", 1);
	return ;
}

void	pb(t_list **a, t_list **b)
{
	t_list	*a_top;

	if (!(*a))
		return ;
	a_top = pop_and_rewrite(a);
	push_and_rewrite(b, a_top);
	ft_putstr_fd("pb\n", 1);
	return ;
}
