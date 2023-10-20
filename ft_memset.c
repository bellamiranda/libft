/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:26:00 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/20 16:19:42 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < n)
		str[i++] = c;
	return (s);
}
/*
//preenche n bites de s com o int c, (?ignora null?)
#include <stdio.h>
#include <string.h>

int main(void)
{
    char    test1[11] = "0123456789";
    char    test2[11] = "0123456789";
    size_t  n = 10;
    int c = '9';
    ft_memset(test1, c, n);
    memset(test2, c, n);
    //printf("%zu\n", test1);//p = path, printa a memoria em hexadecimal
    //printf("%zu\n", test2);//zu printa memoria em decimal
    printf("ft_memset = %s\n", test1);
    printf("memset = %s\n", test2);
}*/
