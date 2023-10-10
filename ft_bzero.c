/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:02:18 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/07 17:44:57 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < n)
		str[i++] = '\0';
}
/*
#include <stdio.h>
#include <strings.h>

int main(void)
{
    size_t  n = 5;
    char    test1[11] = "0123456789";
    char    test2[11] = "0123456789";
    ft_bzero((void *)test1, n);
    bzero((void *)test2, n);
    printf("ft_bzero = %s\n", test1);
    printf("ft_bzero = %s\n", test2);
}
//(void *) eh pointer para a memoria da string
*/
