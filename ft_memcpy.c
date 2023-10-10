/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:22:32 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/08 16:07:42 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	if (d == 0 && s == 0)
		return (dest);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/* #include <stdio.h>

int main(void)
{
    char    dest1[11] = "0123456789";
    char    dest2[11] = "0123456789";
    const char    src[] = "abcde";
    int n = 5;

    ft_memcpy(dest1, src, n);
    memcpy(dest2, src, n);
    printf("ft_memcpy = %s\n", dest1);
    printf("memcpy = %s\n", dest2);
} */
