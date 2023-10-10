/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:38:36 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/07 17:54:12 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
/* 
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%i\n", ft_toupper('a'));
	printf("%i\n", toupper('a'));
} */