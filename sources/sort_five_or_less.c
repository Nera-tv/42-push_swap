/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_or_less.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <dvilard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:57:47 by dvilard           #+#    #+#             */
/*   Updated: 2022/04/06 14:57:40 by dvilard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_n(t_data *data, int n)
{
	int	i;

	i = -1;
	while (++i < data->a_len)
		if (data->a[i] == n)
			return (i);
	return (-1);
}

void	ft_move_toward(t_data *data, int n)
{
	int	idx;

	if (data->a[0] == n)
		return ;
	idx = find_n(data, n);
	if (idx > data->a_len / 2)
		p_rra(data);
	else
		p_ra(data);
}

void	sort_five_or_less(t_data *data)
{
	if (data->a_len == 2)
		p_ra(data);
	else if (data->a_len == 3)
		sort_three(data);
	else
	{
		while (data->a_len == 5)
		{
			ft_move_toward(data, 0);
			if (data->a[0] == 0)
				pb(data);
		}
		while (data->a_len == 4)
		{
			ft_move_toward(data, 1);
			if (data->a[0] == 1)
				pb(data);
		}
		sort_three(data);
		while (data->b_len)
			pa(data);
	}
}
