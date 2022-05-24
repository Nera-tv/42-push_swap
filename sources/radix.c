#include "../includes/push_swap.h"

void	radix(t_data *data)
{
	int	shift;
	int	j;
	int	max;

	max = 0;
	while ((data->a_len - 1) >> max)
		max++;
	shift = -1;
	while (shift++ < max - 1)
	{
		j = data->a_len + 1;
		while (--j)
		{
			if (data->a[0] & (1 << shift))
				p_ra(data);
			else
				pb(data);
		}
		while (data->b_len > 0)
			pa(data);
	}
}