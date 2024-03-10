/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghumash <sghumash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:40:30 by sghumash          #+#    #+#             */
/*   Updated: 2024/03/10 14:40:31 by sghumash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
