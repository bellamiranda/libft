/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <hescoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:56:32 by hescoval          #+#    #+#             */
/*   Updated: 2024/02/03 20:26:58 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phylo.h"

int	main(int ac, char **av)
{
	t_general	*info;
	char		*error;

	info = NULL;
	error = NULL;
	if (ac < 5 || ac > 6)
		return (p_error("Wrong Argument Count"));
	if (invalid_args(ac, av))
		return (p_error("Arguments not properly formatted"));
	info = ft_calloc(1, sizeof(t_general));
	if (!info)
		return (p_error("Malloc Error"));
	error = init_data(info, av, ac);
	if (error)
		return (p_error(error));
	eat_setup(info);
	clean(info);
}
