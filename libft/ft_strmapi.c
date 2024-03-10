#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*sd;

	i = 0;
	if (!s)
		return (0);
	sd = ft_strdup((char *)(s));
	if (!sd)
		return (sd);
	while (sd[i])
	{
		sd[i] = f(i, sd[i]);
		i++;
	}
	return (sd);
}
