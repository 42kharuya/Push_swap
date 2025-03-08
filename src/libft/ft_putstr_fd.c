/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:55:26 by kharuya           #+#    #+#             */
/*   Updated: 2025/03/05 18:12:46 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	error_check;

	error_check = 0;
	if (!s)
		return (0);
	if (ft_strncmp(s, "Error\n", sizeof(s)) == 0)
		error_check = 1;
	while (*s)
		write(fd, &*(s++), 1);
	return (error_check);
}
