#include "../../include/push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst)
	{
		new->pre = ft_lstlast(*lst);
		ft_lstlast(*lst)->next = new;
	}
	else
		*lst = new;
	return ;
}
