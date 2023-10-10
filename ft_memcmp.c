/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:52:36 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/07 16:35:10 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
    char    a[11] = "0123456789";
    char    b[11] = "0123456789";
    int n = 5;

    printf("ft_memcmp = %i\n", ft_memcmp(a, b, n));
    printf("memcmp = %i\n", memcmp(a, b, n));
}*/
