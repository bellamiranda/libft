/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:50:44 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/20 15:27:30 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)&s[i]);
	return (0);
}
/* 
//retorna um pointer pra ultima ocorrencia de c na str
#include <stdio.h>

int main(void)
{
    const char a[] = "01234562789";
    int b;

    b = '0';
    printf("ft_strrchr = %s\n", ft_strrchr(a, b));
    printf("strrchr = %s\n", strrchr(a, b));
} */