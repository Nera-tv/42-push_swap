/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <dvilard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:42:02 by dvilard           #+#    #+#             */
/*   Updated: 2022/05/24 17:23:48 by dvilard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
