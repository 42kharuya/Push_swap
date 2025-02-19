#include "../../include/push_swap.h"

int	get_min_num(t_list *stack)
{
	int min_num;

	min_num = stack->num;
	while(stack)
	{
		if (min_num > stack->num)
			min_num = stack->num;
		stack = stack->next;
	}
	return (min_num);
}

int	get_max_num(t_list *stack)
{
	int max_num;

	max_num = stack->num;
	while(stack)
	{
		if (max_num < stack->num)
			max_num = stack->num;
		stack = stack->next;
	}
	return (max_num);
}