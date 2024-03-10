/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghumash <sghumash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:42:10 by sghumash          #+#    #+#             */
/*   Updated: 2024/03/10 14:42:11 by sghumash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
