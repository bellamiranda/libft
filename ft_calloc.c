/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:35:45 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/20 15:40:08 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*dest;
	size_t	i;

	dest = malloc(nmemb * size);
	i = 0;
	if (dest == NULL)
		return (NULL);
	ft_bzero(dest, nmemb * size);
	return ((void *)dest);
}
/*
//aloca nmemb elementos de size bites em uma array void e preenche com NULL
#include <stdio.h>

int main(void)
{
    char    *a;

    a = (char *)ft_calloc(5, 2);
    printf("%s\n", a);
    free (a);
}*/
