#include "../../include/push_swap.h"

int get_near_less_num(t_list *b, int a_num)
{
	int		diff;
	int		near_less_num;
	t_list	*head;

	head = b;
	while(b)
	{
		if (b->num < a_num)
		{
			diff = a_num - b->num;
			near_less_num = b->num;
			break ;
		}
		b = b->next;
	}
	b = head;
	while (b)
	{
		if (a_num - b->num < diff)
		{
			diff = a_num - b->num;
			near_less_num = b->num;
		}
		b = b->next;
	}
	return (near_less_num);
}

int get_near_more_num(t_list *a, int b_num)
{
	int		diff;
	int		near_more_num;
	t_list	*head;

	head = a;
	while(a)
	{
		if (a->num > b_num)
		{
			diff = a->num - b_num;
			near_more_num = a->num;
			break ;
		}
		a = a->next;
	}
	a = head;
	while (a)
	{
		if (a->num - b_num < diff)
		{
			diff = a->num - b_num;
			near_more_num = a->num;
		}
		a = a->next;
	}
	return (near_more_num);
}

int get_near_num(t_list *stack, int num, int (*get_near_num)(t_list *stack, int _num))
{
	return (get_near_num(stack, num));
}