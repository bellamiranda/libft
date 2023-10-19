/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:51:53 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/19 19:30:04 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*dest;

	dest = *lst;
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (dest->next != NULL)
		dest = dest->next;
	dest->next = new;
}

/* #include <stdio.h>

int	main(void)
{
	t_list	*elem;
	char	*str = "Isabella";
	char	*str1 = "Miranda";
	char	*str2 = "Camargo";
	char	*str3 = "de";
	char	*str4 = "Lima";

	elem = ft_lstnew((void *)str);
	ft_lstadd_back(&elem, ft_lstnew((void *)str1));
	ft_lstadd_back(&elem, ft_lstnew((void *)str2));
	ft_lstadd_back(&elem, ft_lstnew((void *)str3));
	ft_lstadd_back(&elem, ft_lstnew((void *)str4));
	printf("%s\n", (char *)elem->content);
	printf("%s\n", (char *)elem->next->content);
	printf("%s\n", (char *)elem->next->next->content);
	printf("%s\n", (char *)elem->next->next->next->content);
	printf("%s\n", (char *)elem->next->next->next->next->content);
	free(elem);
} */