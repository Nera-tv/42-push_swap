/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <dvilard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 15:31:17 by dvilard           #+#    #+#             */
/*   Updated: 2022/05/24 17:50:52 by dvilard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rrb(t_data *data)
{
	int	tmp;

	if (data->b_len <= 1)
		return ;
	tmp = data->b[data->b_len - 1];
	shift_in_tab_down(data, 'b');
	data->b[0] = tmp;
}

void	p_rrb(t_data *data)
{
	ft_putstr_fd("rrb\n", 1);
	rrb(data);
}
