/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:14:39 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/08 16:08:53 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*a;

	a = "0123456789";
	printf("%d\n", ft_strlen(a));
	printf("%lu\n", strlen(a));
} */