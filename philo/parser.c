/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <hescoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 20:29:52 by hescoval          #+#    #+#             */
/*   Updated: 2024/02/03 20:30:31 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phylo.h"

int	not_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (true);
		i++;
	}
	return (false);
}

int	invalid_args(int ac, char **args)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (not_numeric(args[i]))
			return (true);
		if (ft_atoi(args[i]) != ft_atol(args[i]))
			return (true);
		i++;
	}
	return (false);
}
