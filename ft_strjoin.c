/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:45:34 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/08 17:17:56 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		size1;
	int		size2;
	int		i;

	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	dest = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (dest == NULL)
		return (NULL);
	i = -1;
	while (++i < size1)
		dest[i] = s1[i];
	while (i < (size1 + size2))
	{
		dest[i] = s2[i - size1];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	char	s1[] = "01234";
	char	s2[] = "56789";

	printf("%s\n", ft_strjoin(s1, s2));
} */