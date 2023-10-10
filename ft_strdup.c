/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:40:54 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/09 18:32:45 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	dest = malloc(ft_strlen(s) + 1);
	i = 0;
	if (dest == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* 
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	char	*str;

	i = 1;
	while (i < argc)
	{
		str = ft_strdup(argv[i]);
		printf("%s\n", str);
		free(str);//liberar a memoria alocada de cada string
		i++;
	}
	return (0);
} */