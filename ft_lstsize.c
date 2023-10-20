/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:21:53 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/20 15:44:11 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/* 
//lst != NULL quando ja nao tem mais lista
#include <stdio.h>

int	main(void)
{
	t_list	*elem;
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
	printf("%s\n", (char *)elem->content);
	printf("%s\n", (char *)elem->next->content);
	printf("%s\n", (char *)elem->next->next->content);
	printf("%s\n", (char *)elem->next->next->next->content);
	printf("%s\n", (char *)elem->next->next->next->next->content);
	printf("%i\n", ft_lstsize(elem));
	free(elem);
} */