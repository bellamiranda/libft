/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syncing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <hescoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:38:27 by hescoval          #+#    #+#             */
/*   Updated: 2024/02/03 20:46:24 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phylo.h"

void	threads_ready(t_general *info)
{
	while (!get_bool(&info->check_value, &info->ready))
		;
}
