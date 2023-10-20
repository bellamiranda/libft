/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:53:18 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/20 15:44:54 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = ft_calloc(sizeof(t_list), 1);
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/* #include <stdio.h>

int	main(void)
{
	t_list	*elem;
	char	*str = "Isabella";
	
	elem = ft_lstnew((void *)str);
	printf("%s\n", (char *)elem->content);
	//free(elem);
} */