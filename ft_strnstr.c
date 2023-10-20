/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:55:25 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/20 17:08:00 by ismirand         ###   ########.fr       */
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
//procura little em len bites da big, retorna um pointer para \
onde comeca a little (i corre na big, j na little) \
ultimo if e pra checar se achou a little inteira
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