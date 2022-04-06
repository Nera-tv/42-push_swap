/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <dvilard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:49:01 by dvilard           #+#    #+#             */
/*   Updated: 2022/03/02 15:30:31 by dvilard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_three(t_data *data)
{
	if (data->a[0] < data->a[1] && data->a[0] < data->a[2])
	{
		if (data->a[1] > data->a[2])
		{
			data->tab[6](data);
			data->tab[0](data);
		}
	}
	else if (data->a[0] > data->a[1] && data->a[0] > data->a[2])
	{
		if (data->a[1] < data->a[2])
			data->tab[3](data);
		else
		{
			data->tab[0](data);
			data->tab[6](data);
		}
	}
	else
	{
		if (data->a[1] < data->a[2])
			data->tab[0](data);
		else
			data->tab[6](data);
	}
}
