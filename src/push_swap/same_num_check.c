#include "../../include/push_swap.h"

bool same_num_check(t_list *a)
{
	int		*a_array;
	int		i;
	int		j;

	a_array = lst_into_array(a);
	if(!a_array)
		return (false);
	i = 0;
	while(i < ft_lstsize(a) - 1)
	{
		j = i + 1;
		while (j < ft_lstsize(a))
		{
			if (a_array[j] == a_array[i])
			{
				free (a_array);
				return (false);
			}
			j++;
		}
		i++;
	}
	free (a_array);
	return (true);
}