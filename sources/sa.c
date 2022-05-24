/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <dvilard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 15:04:11 by dvilard           #+#    #+#             */
/*   Updated: 2022/05/24 17:51:02 by dvilard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_data *data)
{
	int	tmp;

	if (data->a_len <= 1)
		return ;
	tmp = data->a[0];
	data->a[0] = data->a[1];
	data->a[1] = tmp;
}

void	p_sa(t_data *data)
{
	ft_putstr_fd("sa\n", 1);
	sa(data);
}
