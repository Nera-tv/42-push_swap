/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <dvilard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 15:31:14 by dvilard           #+#    #+#             */
/*   Updated: 2022/05/24 17:50:50 by dvilard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_data *data)
{
	int	tmp;

	if (data->a_len <= 1)
		return ;
	tmp = data->a[data->a_len - 1];
	shift_in_tab_down(data, 'a');
	data->a[0] = tmp;
}

void	p_rra(t_data *data)
{
	ft_putstr_fd("rra\n", 1);
	rra(data);
}
