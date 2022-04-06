/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <dvilard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:19:18 by dvilard           #+#    #+#             */
/*   Updated: 2022/04/06 14:26:12 by dvilard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_stacks(t_data *data)
{
	int	i;

	i = 0;
	printf("----------------|----------------\n");
	printf("\ta\t|\tb\n----------------|----------------\n");
	printf("\t%d\t|\t%d\n", data->a_len, data->b_len);
	printf("----------------|----------------\n");
	if (data->a_len >= data->b_len)
	{
		while (i < data->a_len)
		{
			printf("\t%d\t|\t%d\n", data->a[i], data->b[i]);
			i++;
		}
	}
	else if (data->a_len < data->b_len)
	{
		while (i < data->b_len)
		{
			printf("\t%d\t|\t%d\n", data->a[i], data->b[i]);
			i++;
		}
	}
	printf("----------------|----------------\n\n\n");
}

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
