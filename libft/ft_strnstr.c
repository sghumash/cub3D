/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghumash <sghumash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:42:16 by sghumash          #+#    #+#             */
/*   Updated: 2024/03/10 14:42:17 by sghumash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (needle[n] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		while (haystack[i + n] == needle[n] && needle[n] != '\0' && n + i < len)
			n++;
		if (needle[n] == '\0')
			return ((char *)haystack + i);
		i++;
		n = 0;
	}
	return (0);
}
