/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:08:05 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/07 17:53:45 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
/* 
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%i\n", ft_tolower('A'));
	printf("%i\n", tolower('A'));
} */