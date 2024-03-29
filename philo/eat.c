/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <hescoval@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:03:23 by hescoval          #+#    #+#             */
/*   Updated: 2024/02/03 20:49:00 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phylo.h"

void	write_dead(t_general *info, int id)
{
	long long	time;

	mutex_handle(&info->print, LOCK);
	time = time_check() - info->start_time;
	printf("%lld %i died\n", time, id);
	mutex_handle(&info->print, UNLOCK);
}

void	*monitor(void *data)
{
	int			i;
	t_general	*info;

	info = (t_general *)data;
	threads_ready(info);
	while (1)
	{
		i = -1;
		while (++i < info->total_p)
		{
			if (philo_dead(&info->philos[i]))
			{
				set_bool(&info->check_value, &info->end, true);
				write_dead(info, info->philos[i].p_id);
				return (NULL);
			}
			if (get_long(&info->check_value, &info->full_philos) 
				== info->total_p)
			{
				set_bool(&info->check_value, &info->end, true);
				return (NULL);
			}
		}
	}
	return (NULL);
}

void	eat(t_philo *philo)
{
	long long	max_meals;

	max_meals = philo->info->max_meals;
	mutex_handle(&philo->f_one->mtx, LOCK);
	write_handle(FORK_ONE, philo);
	mutex_handle(&philo->f_two->mtx, LOCK);
	write_handle(FORK_TWO, philo);
	write_handle(EAT, philo);
	set_long(&philo->p_mtx, &philo->last_meal, time_check());
	better_usleep(philo->info->eat_time);
	mutex_handle(&philo->f_one->mtx, UNLOCK);
	mutex_handle(&philo->f_two->mtx, UNLOCK);
	increment_long(&philo->p_mtx, &philo->times_eaten);
	if (get_long(&philo->p_mtx, &philo->times_eaten) == max_meals)
	{
		increment_long(&philo->info->check_value, &philo->info->full_philos);
		set_bool(&philo->p_mtx, &philo->over, true);
	}
}

void	*dinner_time(void *data)
{
	t_philo		*philo;
	long long	start;

	philo = (t_philo *)data;
	threads_ready(philo->info);
	start = time_check();
	set_long(&philo->p_mtx, &philo->last_meal, start);
	while (!end_checks(philo))
	{
		if (get_bool(&philo->info->check_value, &philo->info->end)
			|| get_bool(&philo->p_mtx, &philo->over))
			return (NULL);
		write_handle(THINK, philo);
		better_usleep(1);
		eat(philo);
		better_usleep(1);
		write_handle(SLEEP, philo);
		better_usleep(philo->info->sleep_time);
	}
	return (NULL);
}

void	eat_setup(t_general *info)
{
	int	i;

	i = -1;
	if (info->max_meals == 0)
		return ;
	if (info->total_p == 1)
	{
		thread_handle(&info->philos[0].thread, one_philo, &info->philos[0],
			CREATE);
		thread_handle(&info->philos[0].thread, NULL, NULL, JOIN);
		return ;
	}
	else
	{
		while (++i < info->total_p)
			thread_handle(&info->philos[i].thread, dinner_time,
				&info->philos[i], CREATE);
	}
	thread_handle(&info->monitor, monitor, info, CREATE);
	set_long(&info->check_value, &info->start_time, time_check());
	set_bool(&info->check_value, &info->ready, true);
	i = -1;
	while (++i < info->total_p)
		thread_handle(&info->philos[i].thread, NULL, NULL, JOIN);
	thread_handle(&info->monitor, NULL, NULL, JOIN);
}
