/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:07:08 by megrelli          #+#    #+#             */
/*   Updated: 2025/07/22 15:22:15 by megrelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"

static void	update_sq(int i, int j, int val, t_square *sq)
{
	if (val > sq->size)
	{
		sq->size = val;
		sq->row = i;
		sq->col = j;
	}
}

static void	fill_tab(t_map *m, int **dp, t_square *sq)
{
	int	i;
	int	j;

	i = 0;
	while (i < m->rows)
	{
		j = 0;
		while (j < m->cols)
		{
			if (m->tab[i][j] == m->empty)
			{
				if (i == 0 || j == 0)
					dp[i][j] = 1;
				else
					dp[i][j] = 1
						+ min3(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]);
				update_sq(i, j, dp[i][j], sq);
			}
			else
				dp[i][j] = 0;
			j++;
		}
		i++;
	}
}

t_square	solve_bsq(t_map *m)
{
	t_square	sq;
	int			i;
	int			**dp;

	sq.size = 0;
	sq.row = 0;
	sq.col = 0;
	dp = malloc(sizeof(int *) * m->rows);
	if (!dp)
		return (sq);
	i = 0;
	while (i < m->rows)
	{
		dp[i] = malloc(sizeof(int) * m->cols);
		i++;
	}
	fill_tab(m, dp, &sq);
	i = 0;
	while (i < m->rows)
	{
		free(dp[i]);
		i++;
	}
	free(dp);
	return (sq);
}
