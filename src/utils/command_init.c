/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 15:35:54 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/20 15:35:57 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_command	command_init(void)
{
	t_command command;

	command.all = 0;
	command.ra = 0;
	command.rb = 0;
	command.rr = 0;
	command.rra = 0;
	command.rrb = 0;
	command.rrr = 0;

	return (command);
}