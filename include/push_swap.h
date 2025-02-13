/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:53:46 by kharuya           #+#    #+#             */
/*   Updated: 2025/02/13 18:48:49 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//include
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>
# include <stdbool.h>

//struct
typedef struct s_list
{
	struct s_list	*pre;
	struct s_list	*next;
	int				num;
	int				index;
}				t_list;

//commands
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);

//libft
int		ft_atoi(const char *str);
void	ft_putstr_fd(char *s, int fd);
t_list	*ft_lstnew(int index, int num);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstfirst(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);

//push_swap
t_list *make_stack_a(int argc, char const *argv[]);
void	compress(t_list **stack_a);
void    radix_sort(t_list **stack_a, t_list **stack_b);

#endif