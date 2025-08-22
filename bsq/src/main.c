/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:06:19 by megrelli          #+#    #+#             */
/*   Updated: 2025/07/23 15:10:58 by megrelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"

void	main2(t_square *sq, t_map *map)
{
	if (!parse_stdin(map))
		write(2, "map error\n", 10);
	else
	{
		*sq = solve_bsq(map);
		print_map(map, *sq);
		free_map(map);
	}
}

int	main(int ac, char **av)
{
	t_map		map;
	t_square	sq;
	int			i;

	if (ac < 2)
	{
		main2(&sq, &map);
		return (0);
	}
	i = 1;
	while (i < ac)
	{
		if (!parse_map(av[i], &map))
			write(2, "map error\n", 10);
		else
		{
			sq = solve_bsq(&map);
			print_map(&map, sq);
			free_map(&map);
		}
		if (i + 1 < ac)
			write(1, "\n", 1);
		i++;
	}
	return (0);
}
