/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <dvilard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 15:31:07 by dvilard           #+#    #+#             */
/*   Updated: 2022/05/24 17:50:45 by dvilard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rb(t_data *data)
{
	int	tmp;

	if (data->b_len <= 1)
		return ;
	tmp = data->b[0];
	shift_in_tab_up(data, 'b');
	data->b[data->b_len - 1] = tmp;
}

void	p_rb(t_data *data)
{
	ft_putstr_fd("rb\n", 1);
	rb(data);
}
