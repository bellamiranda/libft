/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:33:25 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/20 17:03:09 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	if (!s)
		return (ft_strdup(""));
	dest = (char *)ft_calloc(sizeof(char), (len + 1));
	if (!dest)
		return (NULL);
	i = -1;
	while (++i < len)
		dest[i] = (*f)(i, s[i]);
	dest[i] = '\0';
	return (dest);
}

/* 
//cria uma nova string aplicando a funcao f a cada char
#include <stdio.h>

char	ft_test(unsigned int i, char c)
{
	return (ft_toupper(c));
}

int	main(void)
{
	char	*str = "ola";
	printf("antes: %s\n", str);
	char	*res = ft_strmapi(str, ft_test);
	printf("depois: %s\n", res);
	free (res);
} */