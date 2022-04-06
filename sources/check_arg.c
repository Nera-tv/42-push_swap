/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <dvilard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:06:39 by dvilard           #+#    #+#             */
/*   Updated: 2022/02/28 16:13:17 by dvilard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_if_number(int argc, char **argv, t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < argc)
	{
		while (argv[i + 1][j])
		{
			if (ft_isdigit(argv[i + 1][j]) != 1 && argv[i + 1][j] != '-')
				error(data);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}

int	is_same_nbr_in_tab(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < data->a_len)
	{
		while (j < data->a_len)
		{
			if (data->a[i] == data->a[j] && i != j)
				error(data);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
