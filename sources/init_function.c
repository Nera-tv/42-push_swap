/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <dvilard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:08:43 by dvilard           #+#    #+#             */
/*   Updated: 2022/03/02 15:30:48 by dvilard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	init_function(t_data *data)
{
	data->tab[0] = p_sa;
	data->tab[1] = p_sb;
	data->tab[2] = ss;
	data->tab[3] = p_ra;
	data->tab[4] = p_rb;
	data->tab[5] = rr;
	data->tab[6] = p_rra;
	data->tab[7] = p_rrb;
	data->tab[8] = rrr;
	data->tab[9] = pa;
	data->tab[10] = pb;
	data->tab[11] = NULL;
}
