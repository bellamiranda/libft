/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:55:25 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/09 17:46:18 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j] != '\0' && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/* 
#include <stdio.h>
#include <bsd/string.h>

int main(void)
{
    const char  big[] = "oi tudo bem";
    const char  little[] = "tudo";
    size_t len = 8;

    printf("ft_strnstr = %s\n", ft_strnstr(big, little, len));
    printf("strnstr = %s\n", strnstr(big, little, len));
}
//cc ---- -lbsd */