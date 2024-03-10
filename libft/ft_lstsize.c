#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*j;

	j = lst;
	i = 0;
	if (!lst)
		return (0);
	while (j != 0)
	{
		i++;
		j = j->next;
	}
	return (i);
}
