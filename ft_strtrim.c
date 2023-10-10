/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 17:26:40 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/10 15:42:28 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (s1[i] == set[0])
			i += set_size;
		i++;
		j++;
	}
	dest = malloc(j + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (s1[i] == set[0])
			i += set_size;
		dest[j++] = s1[i++];
	}
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	char	s1[] = "oi0123456789oi";
	char	set[] = "oi";

	printf("%s\n", ft_strtrim(s1, set));
} */