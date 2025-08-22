/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:06:55 by megrelli          #+#    #+#             */
/*   Updated: 2025/07/22 15:07:03 by megrelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"

static int	in_sq(int i, int j, t_square sq)
{
	if (i <= sq.row && i > sq.row - sq.size
		&& j <= sq.col && j > sq.col - sq.size)
		return (1);
	return (0);
}

void	print_map(t_map *m, t_square sq)
{
	int	i;
	int	j;

	i = 0;
	while (i < m->rows)
	{
		j = 0;
		while (j < m->cols)
		{
			if (in_sq(i, j, sq))
				write(1, &m->full, 1);
			else
				write(1, &m->tab[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
