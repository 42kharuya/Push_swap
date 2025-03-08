/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <haruya.0411.k@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:53:46 by kharuya           #+#    #+#             */
/*   Updated: 2025/03/05 18:12:09 by kharuya          ###   ########.fr       */
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

typedef struct s_command
{
	int		all;
	int		ra;
	int		rra;
	int		rb;
	int		rrb;
	int		rr;
	int		rrr;
}				t_command;

typedef struct s_list
{
	struct s_list	*pre;
	struct s_list	*next;
	t_command		command;
	int				num;
}				t_list;

//commands
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b, bool *malloc_check);
void	pb(t_list **a, t_list **b, bool *malloc_check);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);

//libft
int		ft_atoi(const char *str, bool *atoi_error);
int		ft_putstr_fd(char *s, int fd);
t_list	*ft_lstnew(int num);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstfirst(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_lstadd_back(t_list **lst, t_list *new);

//push_swap
t_list	*make_stack_a(int argc, char const *argv[]);
void	free_stack(t_list **stack);
void	sort_start(t_list **a, t_list **b, int lst_size, bool *malloc_check);
void	sort_2(t_list **a);
void	sort_3(t_list **a);
void	sort_4(t_list **a, t_list **b, bool *malloc_check);
void	sort_5_or_more(t_list **a, t_list **b, bool *malloc_check);
void	swap_smallest(t_list **a, t_list **b, bool *malloc_check);
bool	check_error_format(char const *argv[]);
bool	check_error_samenum(t_list *a);
int		*lst_into_array(t_list *a);
int		get_min_num(t_list *stack);
int		get_max_num(t_list *stack);
void	turk_step_1(t_list **a, t_list **b, bool *malloc_check);
void	turk_step_2(t_list **a, t_list **b, bool *malloc_check);
int		get_near_less_num(t_list *b, int a_num);
int		get_near_more_num(t_list *a, int b_num);
int		get_index(t_list *stack, int num);
void	command_reset_lst(t_list **a, t_list **b);
void	calc_operations_step1(t_list **a, t_list *b);
void	calc_operations_step2(t_list *a, t_list **b);
void	command_init(t_list **stack);
bool	check_already_sorted(t_list *a);
void	change_to_rr_rrr(t_list **b);
void	calc_command_all(t_list **b);
void	compress(t_list **a, bool *malloc_check);

#endif