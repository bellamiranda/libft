/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:28:49 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/20 16:09:04 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen((char *)src));
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen((char *)src));
}

/* 
//o retorno e sempre o tamanho da src, e altera a dest ate size
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char		a[] = "abcde";
	char		A[] = "abcde";
	char		b[] = "12345678";
	unsigned int	s;

	s = 6;
	printf("ft_strlcpy: %u\n", ft_strlcpy(a, b, s));
    printf("string criada: %s\n", a);
    printf("strlcpy: %zu\n", strlcpy(A, b, s));
    printf("string criada: %s\n", A);
} */