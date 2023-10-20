/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:37:08 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/20 16:59:14 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	s_dest;
	unsigned int	s_src;
	unsigned int	i;
	unsigned int	j;

	s_dest = (unsigned int)ft_strlen(dest);
	s_src = (unsigned int)ft_strlen(src);
	j = s_dest;
	i = 0;
	if (size <= s_dest || size == 0)
		return (size + s_src);
	while (size > (j + 1) && src[i] != '\0')
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (s_dest + s_src);
}

/* 
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char		a[20] = "123";
	char		A[20] = "123";
	char		b[11] = "abcdef";
	unsigned int	s;

	s = 2;
	printf("ft_strlcat: %u\n", ft_strlcat(a, b, s));
	printf("dest criada: %s\n", a);
	printf("strlcat: %zu\n", strlcat(A, b, s));
	printf("dest criada: %s\n", A);
} */