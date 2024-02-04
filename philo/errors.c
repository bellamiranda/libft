/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <hescoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:56:25 by hescoval          #+#    #+#             */
/*   Updated: 2024/01/29 14:07:38 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phylo.h"

void	clean(t_general *info)
{
	int	i;

	i = -1;
	while (++i < info->total_p)
	{
		mutex_handle(&info->forks[i].mtx, DESTROY);
		mutex_handle(&info->philos[i].p_mtx, DESTROY);
	}
	mutex_handle(&info->check_value, DESTROY);
	mutex_handle(&info->print, DESTROY);
	free(info->forks);
	free(info->philos);
	free(info);
}

int	p_error(char *error)
{
	printf(RED"%s\n"RST, error);
	return (0);
}
