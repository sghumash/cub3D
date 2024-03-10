#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*new;

	new = (void *)malloc(count * size);
	if (new == 0)
		return (0);
	ft_bzero(new, (count * size));
	return (new);
}
