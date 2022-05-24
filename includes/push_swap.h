/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <dvilard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:20:02 by dvilard           #+#    #+#             */
/*   Updated: 2022/05/24 17:24:49 by dvilard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_data	t_data;
typedef struct s_index	t_index;

typedef enum e_bool
{
	true = 1,
	false = 0
}			t_bool;

struct s_data
{
	int			*a;
	int			*b;
	int			a_len;
	int			b_len;
	int			*c_a;
	int			*i_a;
	void		(*tab[12])(t_data *);
};

int		check_if_number(int argc, char **argv, t_data *data);
int		is_same_nbr_in_tab(t_data *data);
void	init_stacks(t_data *data, int size, char **str);
void	fill_stack_b(t_data *data);
void	end_prog(t_data *data);
void	error(t_data *data);
void	sa(t_data *data);
void	sb(t_data *data);
void	ss(t_data *data);
void	pa(t_data *data);
void	pb(t_data *data);
void	ra(t_data *data);
void	rb(t_data *data);
void	rr(t_data *data);
void	rra(t_data *data);
void	rrb(t_data *data);
void	rrr(t_data *data);
void	p_sa(t_data *data);
void	p_sb(t_data *data);
void	p_ra(t_data *data);
void	p_rb(t_data *data);
void	p_rra(t_data *data);
void	p_rrb(t_data *data);
void	shift_in_tab_up(t_data *data, char tab_to_shift);
void	shift_in_tab_down(t_data *data, char tab_to_shift);
void	init_function(t_data *data);
void	sort(t_data *data);
void	sort_two(t_data *data);
void	sort_three(t_data *data);
void	sort_five_or_less(t_data *data);
void	indexing_a(t_data *data);
void	radix(t_data *data);

#endif