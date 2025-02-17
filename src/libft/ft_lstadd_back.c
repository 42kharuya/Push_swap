#include "../../include/push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!new)
		return ;
	temp = NULL;
	if (*lst)
	{
		temp = *lst;
		ft_lstlast(*lst)->next = new;
		*lst = temp;
	}
	else
		*lst = new;
}

