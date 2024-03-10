/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghumash <sghumash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:41:26 by sghumash          #+#    #+#             */
/*   Updated: 2024/03/10 14:41:27 by sghumash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned const char	*s;
	unsigned char		*d;
	size_t				i;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned const char *)src;
	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		i = len - 1;
		while (i < len)
		{
			d[i] = s[i];
			i--;
		}
		return (dst);
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
