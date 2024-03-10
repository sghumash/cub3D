#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*j;

	j = lst;
	if (!j)
		return ;
	while (j)
	{
		f(j->content);
		j = j->next;
	}
}
