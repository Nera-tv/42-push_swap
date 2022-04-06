/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <dvilard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:30:52 by dvilard           #+#    #+#             */
/*   Updated: 2022/03/02 11:28:09 by dvilard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	error(t_data *data)
{
	if (data->a)
		free(data->a);
	if (data->b)
		free(data->b);
	ft_putstr_fd("Error\n", 1);
	exit(0);
}
