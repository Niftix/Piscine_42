/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:07:27 by megrelli          #+#    #+#             */
/*   Updated: 2025/07/22 15:21:18 by megrelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"

int	**allocate_size_table(int rows, int cols)
{
	int	**table;
	int	i;

	table = malloc(sizeof(int *) * rows);
	if (!table)
		return (NULL);
	i = 0;
	while (i < rows)
	{
		table[i] = malloc(sizeof(int) * cols);
		if (!table[i])
			return (NULL);
		i++;
	}
	return (table);
}

void	free_size_table(int **table, int rows)
{
	int	i;

	i = 0;
	while (i < rows)
	{
		free(table[i]);
		i++;
	}
	free(table);
}
