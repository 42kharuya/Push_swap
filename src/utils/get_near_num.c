/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_near_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 19:50:11 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/25 19:50:25 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	get_near_less_num(t_list *b, int a_num)
{
	int		diff;
	int		near_less_num;

	while (b)
	{
		if (b->num < a_num)
		{
			diff = a_num - b->num;
			near_less_num = b->num;
			break ;
		}
		b = b->next;
	}
	b = ft_lstfirst(b);
	while (b)
	{
		if (b->num < a_num && a_num - b->num < diff)
		{
			diff = a_num - b->num;
			near_less_num = b->num;
		}
		b = b->next;
	}
	return (near_less_num);
}

int	get_near_more_num(t_list *a, int b_num)
{
	int		diff;
	int		near_more_num;

	while (a)
	{
		if (a->num > b_num)
		{
			diff = a->num - b_num;
			near_more_num = a->num;
			break ;
		}
		a = a->next;
	}
	a = ft_lstfirst(a);
	while (a)
	{
		if (a->num > b_num && a->num - b_num < diff)
		{
			diff = a->num - b_num;
			near_more_num = a->num;
		}
		a = a->next;
	}
	return (near_more_num);
}
