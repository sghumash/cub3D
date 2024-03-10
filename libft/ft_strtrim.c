#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s1 || !set)
		return (0);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = (ft_strlen(s1) - 1);
	while (j > 0 && ft_strchr(set, s1[j]))
		j--;
	return (ft_substr(s1, i, j + 1 - i));
}
