/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <dvilard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:06:50 by dvilard           #+#    #+#             */
/*   Updated: 2022/05/02 15:23:50 by dvilard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	init_stacks(t_data *data, int size, char **str)
{
	int		i;
	long	nbr;

	data->a = malloc(sizeof(int *) * (size + 1));
	if (!data->a)
		error(data);
	data->a_len = size;
	data->b = malloc(sizeof(int *) * (size + 1));
	if (!data->b)
		error(data);
	data->b_len = 0;
	i = 0;
	while (i < size)
	{
		nbr = ft_atoi(str[(i + 1)]);
		if (nbr <= INT_MAX && nbr >= INT_MIN)
			data->a[i] = nbr;
		else
			error(data);
		i++;
	}
	fill_stack_b(data);
}
