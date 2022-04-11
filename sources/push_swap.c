/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <dvilard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:19:18 by dvilard           #+#    #+#             */
/*   Updated: 2022/04/11 12:11:19 by dvilard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char *argv[])
{
	t_data	data;

	ft_memset(&data, 0, sizeof(t_data));
	data.a = NULL;
	data.b = NULL;
	if (argc <= 1)
		error(&data);
	check_if_number((argc - 1), argv, &data);
	init_stacks(&data, (argc - 1), argv);
	is_same_nbr_in_tab(&data);
	init_function(&data);
	sort(&data);
	end_prog(&data);
}
