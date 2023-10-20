/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:55:35 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/20 16:55:31 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static int	count_letters(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i])
	{
		i++;
		count++;
	}
	return (count);
}

static char	**ft_free(char **dest, int j)
{
	while (j >= 0)
		free(dest[j--]);
	free(dest);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		i;
	int		j;
	int		n_words;

	n_words = count_words(s, c);
	dest = (char **)ft_calloc(sizeof(char *), (n_words + 1));
	if (s == 0 || dest == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (j < n_words)
	{
		while (s[i] && s[i] == c)
			i++;
		dest[j] = ft_substr(s, i, count_letters(&s[i], c));
		if (!dest[j])
			return (ft_free(dest, j));
		i += count_letters(&s[i], c);
		j++;
	}
	dest[j] = 0;
	return (dest);
}

/*
//count_words conta a quantidade de palavra da matriz \
	(se a posicao for != c e a proxima for c ou null)
//count_letters conta quantidade de letras da string \
	(se a posicao for != c) -> define o fim do substr \
	ja pula esse valor no index, para comecar a contagem \
	da proxima str na matriz
#include <stdio.h>

int	main(void)
{
	char	*s = " 123  56  890";
	char	c = ' ';
	char	**str = ft_split(s, c);
 	int		i;
	
	i = 0;
	while (str[i] != NULL)
	{
		printf("%s\n", str[i]);
		i++;
	}
}*/