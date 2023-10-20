/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:40:15 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/20 15:43:52 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (0);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/* 
//lst->next != NULL esse no e o ultimo elemento
#include <stdio.h>

int	main(void)
{
	t_list	*elem;
	t_list	*dest;
	char	*str = "Isabella";
	char	*str1 = "Miranda";
	char	*str2 = "Camargo";
	char	*str3 = "de";
	char	*str4 = "Lima";

	elem = ft_lstnew((void *)str4);
	ft_lstadd_front(&elem, ft_lstnew((void *)str3));
	ft_lstadd_front(&elem, ft_lstnew((void *)str2));
	ft_lstadd_front(&elem, ft_lstnew((void *)str1));
	ft_lstadd_front(&elem, ft_lstnew((void *)str));
	dest = ft_lstlast(elem);
// 	printf("%s\n", (char *)elem->content);
//	printf("%s\n", (char *)elem->next->content);
//	printf("%s\n", (char *)elem->next->next->content);
//	printf("%s\n", (char *)elem->next->next->next->content);
//	printf("%s\n", (char *)elem->next->next->next->next->content);
	printf("%s\n", (char *)dest->content);
	free(elem);
} */