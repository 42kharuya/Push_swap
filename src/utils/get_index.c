#include "../../include/push_swap.h"
#include <stdio.h>

int	get_index(t_list *stack, int num)
{
	int	index;

	index = 0;
	while (stack)
	{
		if (stack->num == num)
			break ;
		index++;
		stack = stack->next;
	}
	return (index);
}