/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghumash <sghumash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:41:22 by sghumash          #+#    #+#             */
/*   Updated: 2024/03/10 14:41:23 by sghumash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	a;

	a = 0;
	if (!dst && !src)
		return (0);
	if (dst != src)
	{
		while (a < n)
		{
			((unsigned char *)dst)[a] = ((unsigned const char *)src)[a];
			a++;
		}
		return (dst);
	}
	return (dst);
}
