/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:55:35 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/10 17:59:42 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		i;
	int		ccount;
	
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			ccount++;
	}
	dest = malloc(ccount + 1);
	//alocar cada string na string de strings
	dest[i] = '\0';
	return (dest);
}
