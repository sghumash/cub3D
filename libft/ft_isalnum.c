#include "libft.h"

int	ft_isalnum(int c)
{
	int	a;

	a = ft_isalpha(c);
	if (a == 1)
		return (1);
	else
		a = ft_isdigit(c);
	if (a == 1)
		return (1);
	else
		return (0);
}
