/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:57:22 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/07 16:23:19 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || 
		(c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
    printf("%d\n", ft_isalnum('-'));
    printf("%d\n", isalnum('-'));
}*/
