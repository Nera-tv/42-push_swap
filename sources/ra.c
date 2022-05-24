/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <dvilard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 15:30:59 by dvilard           #+#    #+#             */
/*   Updated: 2022/05/24 17:50:43 by dvilard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_data *data)
{
	int	tmp;

	if (data->a_len <= 1)
		return ;
	tmp = data->a[0];
	shift_in_tab_up(data, 'a');
	data->a[data->a_len - 1] = tmp;
}

void	p_ra(t_data *data)
{
	ft_putstr_fd("ra\n", 1);
	ra(data);
}
