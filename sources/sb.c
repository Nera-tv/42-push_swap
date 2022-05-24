/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <dvilard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 15:10:30 by dvilard           #+#    #+#             */
/*   Updated: 2022/05/24 17:51:05 by dvilard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sb(t_data *data)
{
	int	tmp;

	if (data->b_len <= 1)
		return ;
	tmp = data->b[0];
	data->b[0] = data->b[1];
	data->b[1] = tmp;
}

void	p_sb(t_data *data)
{
	ft_putstr_fd("sb\n", 1);
	sb(data);
}
