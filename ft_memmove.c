/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:56:54 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/20 16:14:33 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (d == 0 && s == 0)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	while (n--)
		d[n] = s[n];
	return (dest);
}

/* 
//memcpy mas considera overlaping (copia de tras pra frente pra \
nao perder nada)
#include <stdio.h>

int main(void)
{
	char    dest1[11] = "0123456789";
	char    dest2[11] = "0123456789";
	const char    src[] = "abcdef";
	int n = 5;

	ft_memmove(dest1, src, n);
	memmove(dest2, src, n);
	printf("ft_memmove = %s\n", dest1);
	printf("memmove = %s\n", dest2);
	//while acontece quando dest > src (dest alocado dps de src)
} */