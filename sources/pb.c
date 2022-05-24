/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <dvilard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 15:30:55 by dvilard           #+#    #+#             */
/*   Updated: 2022/05/24 17:50:40 by dvilard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pb(t_data *data)
{
	if (data->a_len == 0)
		return ;
	ft_putstr_fd("pb\n", 1);
	if (data->b_len == 0)
	{
		data->b[0] = data->a[0];
		data->b_len++;
		shift_in_tab_up(data, 'a');
		data->a_len--;
	}
	else
	{
		data->b_len++;
		shift_in_tab_down(data, 'b');
		data->b[0] = data->a[0];
		shift_in_tab_up(data, 'a');
		data->a_len--;
	}
}
