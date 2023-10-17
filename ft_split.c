/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <ismirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:55:35 by ismirand          #+#    #+#             */
/*   Updated: 2023/10/17 16:18:51 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_str(char const *s, char c)
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

static int	count_char(char const *s, char c)
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

	n_words = count_str(s, c);
	dest = (char **)malloc(sizeof(char *) * (n_words + 1));
	if (s == 0 || dest == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (j < n_words)
	{
		while (s[i] && s[i] == c)
			i++;
		dest[j] = ft_substr(s, i, count_char(&s[i], c));
		if (!dest[j])
			return (ft_free(dest, j));
		i += count_char(&s[i], c);
		j++;
	}
	dest[j] = 0;
	return (dest);
}

/* #include <stdio.h>

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
}
	printf("%i\n", count_str(s, c));
	printf("%i\n", count_char(&s[3], c));

 	while (j < n_words)
	{
		i = 0;
		dest[j] = (char *)malloc(sizeof(char) * (count_char(s, c) + 1));
		while (*s != c && *s)
		{
			dest[j][i] = *s;
			i++;
			s++;
		}
		dest[j][i] = '\0';
		j++;
		s++;
	}
	dest[j] = 0;
	return (dest); */