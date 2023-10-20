/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:34:13 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/20 15:47:01 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&s[i]);
		i++;
	}
	return (0);
}
/*
//procura o primeiro c em n bites da memoria apontada por *s
#include <stdio.h>

int main(void)
{
    char    s[12] = "0134562789";
    int c = '2';
    int n = 4;
    char    *a = (char *)ft_memchr(s, c, n);
    char    *b = (char *)memchr(s, c, n);

    printf("ft_memchr = %s\n", a);
    printf("memchr = %s\n", b);
}*/
