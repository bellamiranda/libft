/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:23:19 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/17 16:19:51 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int				i;
	unsigned int	numb;

	numb = n;
	i = 0;
	if (n < 0)
	{
		i++;
		numb = -n;
	}
	while (numb > 0)
	{
		numb = numb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*dest;
	int				size;
	unsigned int	numb;

	numb = n;
	size = ft_count(n);
	if (n == 0)
		return (ft_strdup("0"));
	dest = (char *)malloc(sizeof(char) * (size + 1));
	if (dest == NULL)
		return (NULL);
	if (n < 0)
	{
		dest[0] = '-';
		numb = -n;
	}
	dest[size--] = '\0';
	while (size >= 0 && dest[size] != '-')
	{
		dest[size] = numb % 10 + '0';
		numb = numb / 10;
		size--;
	}
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(1000034));
} */