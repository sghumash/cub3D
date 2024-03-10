#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*j;

	j = lst;
	if (!j)
		return (0);
	while (j->next != 0)
		j = j->next;
	return (j);
}
