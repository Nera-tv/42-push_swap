/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <dvilard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:13:57 by dvilard           #+#    #+#             */
/*   Updated: 2022/03/21 17:39:59 by dvilard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	copy_stack_a(t_data *data)
{
	int	i;

	i = 0;
	data->c_a = malloc(sizeof(t_index *) * data->a_len);
	if (!data->c_a)
		error(data);
	while (i < data->a_len)
	{
		data->c_a[i] = data->a[i];
		i++;
	}
}

void	indexing_a(t_data *data)
{
	int	i;
	int	index;
	int	j;

	i = 0;
	copy_stack_a(data);
	while (i < data->a_len)
	{
		j = 0;
		index = 0;
		while (j < data->a_len)
		{
			if (data->c_a[i] > data->c_a[j])
				index++;
			j++;
		}
		data->a[i] = index;
		i++;
	}
}
