#include "../../include/push_swap.h"

int	get_index(t_list *stack, int num)
{
	int	index;

	index = 0;
	while (stack->num != num)
	{
		index++;
		stack = stack->next;
	}
	return (index);
}