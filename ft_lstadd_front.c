/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:51:09 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/20 15:38:47 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/* 
//e como se arredasse o primeiro elemento da lista pra segunda
posicao e dps definir a primeira posicao como new
#include <stdio.h>

int	main(void)
{
	t_list	*elem;
	char	*str = "Isabella";
	char	*new = "Miranda";
	
	elem = ft_lstnew((void *)str);
	ft_lstadd_front(&elem, ft_lstnew((void *)new));//coloca new como 1
	ft_lstadd_front(&elem, ft_lstnew((void *)str));//volta str pra 1
	printf("%s\n", (char *)elem->content);//printa primeiro
	printf("%s\n", (char *)elem->next->content);//printa segundo
	free(elem);
} */