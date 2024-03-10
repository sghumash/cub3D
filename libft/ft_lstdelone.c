#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*j;

	if (!lst)
		return ;
	if (!del)
		return ;
	j = lst;
	(*del)(j->content);
	free(j);
}
