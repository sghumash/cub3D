/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghumash <sghumash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:40:57 by sghumash          #+#    #+#             */
/*   Updated: 2024/03/10 14:40:58 by sghumash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*j;

	if (!lst)
		return ;
	if (!del)
		return ;
	j = lst;
	(*del)(j->content);
	free(j);
}
