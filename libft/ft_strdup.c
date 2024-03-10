#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(char *s1)
{
	char	*new;
	int		j;

	j = 0;
	new = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!new)
	{
		return (0);
	}
	while (s1[j])
	{
		new[j] = s1[j];
		j++;
	}
	new[j] = '\0';
	return (new);
}
