NAME				= 	push_swap
CC					= 	cc
FLAGS				= 	-Wall -Wextra -Werror
INC					=	-I ./include
LIBFT_FORDER		= 	src/libft
COMMANDS_FORDER 	= 	src/command_utils
ALGORITHM_FORDER 	= 	src/algorithm
UTILS_FORDER		=	src/utils
SRCS				=	src/main.c \
							$(LIBFT_FORDER)/ft_atoi.c $(LIBFT_FORDER)/ft_lstnew.c \
							$(LIBFT_FORDER)/ft_lstadd_front.c $(LIBFT_FORDER)/ft_putstr_fd.c \
							$(LIBFT_FORDER)/ft_lstfirst.c $(LIBFT_FORDER)/ft_lstlast.c \
							$(LIBFT_FORDER)/ft_lstsize.c $(LIBFT_FORDER)/ft_strncmp.c \
							$(LIBFT_FORDER)/ft_lstadd_back.c \
							$(COMMANDS_FORDER)/command_p.c $(COMMANDS_FORDER)/command_r.c \
							$(COMMANDS_FORDER)/command_rr.c $(COMMANDS_FORDER)/command_s.c \
							$(ALGORITHM_FORDER)/radix_algo.c $(ALGORITHM_FORDER)/sort_2to4.c \
							$(ALGORITHM_FORDER)/sort_5to20.c $(ALGORITHM_FORDER)/sort_morethan_20.c \
							$(ALGORITHM_FORDER)/sort.c $(ALGORITHM_FORDER)/turk_algo.c \
							$(UTILS_FORDER)/calc_operations.c $(UTILS_FORDER)/compress.c \
							$(UTILS_FORDER)/error_check.c $(UTILS_FORDER)/free_stack.c \
							$(UTILS_FORDER)/lst_into_array.c $(UTILS_FORDER)/make_stack_a.c \
							$(UTILS_FORDER)/swap_smallest.c $(UTILS_FORDER)/get_extream_num.c
OBJS				= 	$(SRCS:.c=.o)
RM					= 	rm -f
%.o:%.c
	$(CC) $(FLAGS) $(INC) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(INC) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean	all

.PHONY:	all clean fclean re