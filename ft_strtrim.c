/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 17:26:40 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/20 17:09:19 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(s1);
	if (s1 == 0)
		return (NULL);
	if (set == 0)
		return ((ft_strdup(s1)));
	while (ft_strchr(set, s1[start]) && s1[start])
		start++;
	if (start <= end - start)
	{
		while (ft_strrchr(set, s1[end - 1]))
			end--;
	}
	return (ft_substr(s1, start, (end - start)));
}

/* 
//tira set do inicio e do final de s1
//o ultimo while considera end-1 pra nao tirar o espaco do NULL
#include <stdio.h>

int	main(void)
{
	char	s1[] = "oi01234oi56789";
	char	set[] = "oi";

	printf("%s\n", ft_strtrim(s1, set));
} */