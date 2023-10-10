/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:31:44 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/09 17:55:37 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}
/* 
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char a[] = "1234562789";
    int b;

    b = '2';
    printf("ft_strchr = %s\n", ft_strchr(a, b));
    printf("strchr = %s\n", strchr(a, b));
} */