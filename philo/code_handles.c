/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   code_handles.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <hescoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:56:36 by hescoval          #+#    #+#             */
/*   Updated: 2024/02/03 20:38:31 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phylo.h"

void	mutex_handle(t_mtx *mutex, t_codes code)
{
	if (code == LOCK)
		pthread_mutex_lock(mutex);
	else if (code == UNLOCK)
		pthread_mutex_unlock(mutex);
	else if (code == INIT)
		pthread_mutex_init(mutex, NULL);
	else if (code == DESTROY)
		pthread_mutex_destroy(mutex);
}

void	thread_handle(pthread_t *thread, void *(*fct)(void *),
		void *data, t_codes code)
{
	if (code == CREATE)
		pthread_create(thread, NULL, fct, data);
	else if (code == JOIN)
		pthread_join(*thread, NULL);
	else if (code == DETACH)
		pthread_detach(*thread);
}

void	write_handle(t_moves move, t_philo *philo)
{
	long long	s_t;

	if (get_bool(&philo->info->check_value, &philo->info->end))
		return ;
	s_t = get_long(&philo->info->check_value, &philo->info->start_time);
	mutex_handle(&philo->info->print, LOCK);
	if (get_bool(&philo->info->check_value, &philo->info->end))
	{
		mutex_handle(&philo->info->print, UNLOCK);
		return ;
	}
	if (move == FORK_ONE)
		printf("%lld %ld has taken a fork\n", time_check() - s_t, philo->p_id);
	else if (move == FORK_TWO)
		printf("%lld %ld has taken a fork\n", time_check() - s_t, philo->p_id);
	else if (move == EAT)
		printf("%lld %ld is eating\n", time_check() - s_t, philo->p_id);
	else if (move == SLEEP)
		printf("%lld %ld is sleeping\n", time_check() - s_t, philo->p_id);
	else if (move == THINK)
		printf("%lld %ld is thinking\n", time_check() - s_t, philo->p_id);
	mutex_handle(&philo->info->print, UNLOCK);
}
