/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:55:56 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/19 19:38:36 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*dest;
	t_list	*temp;

	dest = *lst;
	while (dest)
	{
		temp = dest->next;
		ft_lstdelone(dest, del);
		dest = temp;
	}
	*lst = NULL;
}
