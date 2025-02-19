/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:27:16 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/19 17:27:19 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

bool format_check(char const *argv[])
{
	int		i;
	int		j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while(argv[i][j])
		{
			while (argv[i][j] == 32 || (argv[i][j] >= 9 && argv[i][j] <= 13))
				j++;
			if (argv[i][j] == '+' || argv[i][j] == '-')
				j++;
			if (!argv[i][j])
				return (false);
			while (argv[i][j] && argv[i][j] != 32 && (argv[i][j] < 9 || argv[i][j] > 13))
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
					return (false);
				j++;
			}
		}
		i++;
	}
	return (true);
}
