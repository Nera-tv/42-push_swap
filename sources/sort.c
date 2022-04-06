/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <dvilard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:42:02 by dvilard           #+#    #+#             */
/*   Updated: 2022/04/06 15:18:49 by dvilard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	radix(t_data *data)
{
	int	shift;
	int	j;
	int	max;

	max = 0;
	while ((data->a_len - 1) >> max)
		max++;
	shift = -1;
	while (shift++ < max - 1)
	{
		j = data->a_len + 1;
		while (--j)
		{
			if (data->a[0] & (1 << shift))
				p_ra(data);
			else
				pb(data);
		}
		while (data->b_len > 0)
			pa(data);
	}
}

int	is_sort(t_data *data)
{
	int	i;

	if (data->a_len == 1)
		return (1);
	i = -1;
	while (++i < data->a_len - 1)
		if (data->a[i] > data->a[i + 1])
			return (0);
	return (1);
}

void	sort(t_data *data)
{
	if (!is_sort(data))
	{
		indexing_a(data);
		if (data->a_len <= 5)
			sort_five_or_less(data);
		else
			radix(data);
	}
}
