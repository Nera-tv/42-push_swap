/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift_in_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <dvilard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 15:47:04 by dvilard           #+#    #+#             */
/*   Updated: 2022/02/28 16:10:32 by dvilard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	shift_in_tab_up(t_data *data, char tab_to_shift)
{
	int	i;

	i = 0;
	if (tab_to_shift == 'a')
	{
		while (i < data->a_len)
		{
			data->a[i] = data->a[i + 1];
			i++;
		}
	}
	else if (tab_to_shift == 'b')
	{
		while (i < data->b_len)
		{
			data->b[i] = data->b[i + 1];
			i++;
		}
	}
}

void	shift_in_tab_down(t_data *data, char tab_to_shift)
{
	int	i;

	if (tab_to_shift == 'a')
	{
		i = data->a_len;
		while (i > 0)
		{
			data->a[i] = data->a[i - 1];
			i--;
		}
	}
	else if (tab_to_shift == 'b')
	{
		i = data->b_len;
		while (i > 0)
		{
			data->b[i] = data->b[i - 1];
			i--;
		}
	}
}
