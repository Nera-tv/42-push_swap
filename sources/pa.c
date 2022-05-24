/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <dvilard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 15:30:46 by dvilard           #+#    #+#             */
/*   Updated: 2022/05/24 17:50:37 by dvilard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_data *data)
{
	if (data->b_len == 0)
		return ;
	ft_putstr_fd("pa\n", 1);
	if (data->a_len == 0)
	{
		data->a[0] = data->b[0];
		data->a_len++;
		shift_in_tab_up(data, 'b');
		data->b_len--;
	}
	else
	{
		data->a_len++;
		shift_in_tab_down(data, 'a');
		data->a[0] = data->b[0];
		shift_in_tab_up(data, 'b');
		data->b_len--;
	}
}
