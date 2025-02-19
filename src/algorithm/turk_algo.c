/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 20:17:18 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/19 22:40:21 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

//上記２つの条件を満たすコマンド数が一番少なくて済むAを選択してプッシュする
static int get_near_less_num(t_list *b, int a_num)
{
	int		diff;
	int		near_less_num;
	t_list	*head;

	head = b;
	while(b)
	{
		if (b->num < a_num)
		{
			diff = a_num - b->num;
			near_less_num = b->num;
			break ;
		}
		b = b->next;
	}
	b = head;
	while (b)
	{
		if (a_num - b->num < diff)
		{
			diff = a_num - b->num;
			near_less_num = b->num;
		}
		b = b->next;
	}
	return (near_less_num);
}

static int get_near_more_num(t_list *a, int b_num)
{
	int		diff;
	int		near_more_num;
	t_list	*head;

	head = a;
	while(a)
	{
		if (a->num > b_num)
		{
			diff = a->num - b_num;
			near_more_num = a->num;
			break ;
		}
		a = a->next;
	}
	a = head;
	while (a)
	{
		if (a->num - b_num < diff)
		{
			diff = a->num - b_num;
			near_more_num = a->num;
		}
		a = a->next;
	}
	return (near_more_num);
}

void turk_step_1(t_list **a, t_list **b)
{

	while (ft_lstsize(*a) <= 3)
	{
		if ((*a)->num >= get_max_num(*b) || (*a)->num <= get_min_num(*b))
		{
			while ((*b)->num != get_max_num(*b))
				rb(b);
			pb(a, b);
			if ((*b)->num != get_min_num(*b))
				rb(b);
		}
		else
		{
			while ((*b)->num != get_near_less_num(*b, (*a)->num))
				rb(b);
			pb(a,b);
		}
	}
}

void	turk_step_2(t_list **a, t_list **b)
{
	if ((*b)->num >= get_max_num(*a) || (*b)->num <= get_min_num(*a))
	{
		while ((*a)->num != get_min_num(*a))
			ra(a);
		pa(a, b);
		if ((*b)->num != get_min_num(*b))
			ra(a);
	}
	else
	{
		while ((*a)->num != get_near_more_num(*a, (*b)->num))
				rb(b);
		pa(a,b);
	}
}
