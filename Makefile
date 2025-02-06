NAME				= 	push_swap
CC					= 	cc
FLAGS				= 	-Wall -Wextra -Werror
INC					=	-I ./include
LIBFT_FORDER		= 	src/libft
COMMANDS_FORDER 	= 	src/commands
PUSH_SWAP_FORDER 	= 	src/push_swap
SRCS				=	$(LIBFT_FORDER)/ft_atoi.c \
							$(COMMANDS_FORDER)/command_p.c $(COMMANDS_FORDER)/command_r.c \
							$(COMMANDS_FORDER)/command_rr.c $(COMMANDS_FORDER)/command_s.c \
							$(PUSH_SWAP_FORDER)/push_swap.c
OBJS				= 	$(SRCS:.c=.o)
RM					= 	rm -f

all: $(NAME)

%.o:%.c
	$(CC) $(FLAGS) $(INC) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(INC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean	all

.PHONY:	all clean fclean re