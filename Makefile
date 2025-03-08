NAME				= 	push_swap
CC					= 	cc
FLAGS				= 	-Wall -Wextra -Werror
INC					=	-I ./include -I ./src/libft

LIBFT_DIR			=	./src/libft
LIBFT 				=	$(LIBFT_DIR)/libft.a

COMMANDS_FORDER 	= 	src/command_utils
ALGORITHM_FORDER 	= 	src/sort
UTILS_FORDER		=	src/utils

SRCS				=	src/main.c \
							$(COMMANDS_FORDER)/command_p.c $(COMMANDS_FORDER)/command_r.c \
							$(COMMANDS_FORDER)/command_rr.c $(COMMANDS_FORDER)/command_s.c \
							$(ALGORITHM_FORDER)/sort_2to4.c $(ALGORITHM_FORDER)/sort_5_or_more.c \
							$(ALGORITHM_FORDER)/sort_start.c $(ALGORITHM_FORDER)/turk_algo.c \
							$(ALGORITHM_FORDER)/swap_smallest.c \
							$(UTILS_FORDER)/calc_operations_step1.c $(UTILS_FORDER)/calc_operations_step2.c \
							$(UTILS_FORDER)/check_error.c $(UTILS_FORDER)/free_stack.c $(UTILS_FORDER)/lst_into_array.c \
							$(UTILS_FORDER)/make_stack_a.c $(UTILS_FORDER)/command_init.c \
							$(UTILS_FORDER)/calc_utils.c $(UTILS_FORDER)/get_index.c $(UTILS_FORDER)/check_already_sorted.c \
							$(UTILS_FORDER)/get_num.c $(UTILS_FORDER)/compress.c
OBJS				= 	$(SRCS:.c=.o)
RM					= 	rm -f
%.o:%.c
	$(CC) $(FLAGS) $(INC) -c $< -o $@

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(FLAGS) $(INC) $(OBJS) -o $(NAME) $(LIBFT)

$(LIBFT):
	make -C $(LIBFT_DIR)

all: $(NAME)

clean:
	make fclean -C $(LIBFT_DIR)
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean	all

.PHONY:	all clean fclean re