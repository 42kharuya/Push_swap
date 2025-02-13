/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:54:49 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/13 15:54:52 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static long	ft_overflow(const char *str, long ans, int sign)
{
	int	digit;

	digit = *str - 48;
	if (sign == 1 && (LONG_MAX - (long)digit) / 10 < ans)
		return (LONG_MAX);
	if (sign == -1 && (LONG_MIN + (long)digit) / 10 > -ans)
		return (LONG_MIN);
	else
		return (1);
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	ans;
	int		check_overflow;

	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	ans = 0;
	while (*str >= '0' && *str <= '9')
	{
		check_overflow = ft_overflow(str, ans, sign);
		if (check_overflow != 1)
			return (check_overflow);
		ans = (ans * 10) + (*str - 48);
		str++;
	}
	return (sign * ans);
}