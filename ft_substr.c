/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:11:59 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/20 17:11:31 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*d;
	unsigned int	i;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(&s[start]);
	d = ft_calloc(sizeof(char), (len + 1));
	if (d == NULL)
		return (NULL);
	i = -1;
	while (++i < len)
		d[i] = s[start + i];
	d[i] = '\0';
	return (d);
}

/* 
//cria uma nova str que comeca no index start e tem tamanho len
#include <stdio.h>

int	main(void)
{
	char const		s[] = "0123456789";
	unsigned int	start = 7;
	size_t			len = 5;

	printf("%s\n", ft_substr(s, start, len));
} */