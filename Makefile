NAME				= 	push_swap
CC					= 	cc
FLAGS				= 	-Wall -Wextra -Werror
INC					=	-I ./include
LIBFT_FORDER		= 	src/libft
COMMANDS_FORDER 	= 	src/commands
PUSH_SWAP_FORDER 	= 	src/push_swap
SRCS				=	$(LIBFT_FORDER)/ft_atoi.c $(LIBFT_FORDER)/ft_lstnew.c \
							$(LIBFT_FORDER)/ft_lstadd_front.c $(LIBFT_FORDER)/ft_putstr_fd.c \
							$(LIBFT_FORDER)/ft_lstfirst.c $(LIBFT_FORDER)/ft_lstlast.c \
							$(COMMANDS_FORDER)/command_p.c $(COMMANDS_FORDER)/command_r.c \
							$(COMMANDS_FORDER)/command_rr.c $(COMMANDS_FORDER)/command_s.c \
							$(PUSH_SWAP_FORDER)/push_swap.c $(PUSH_SWAP_FORDER)/make_stack_a.c
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