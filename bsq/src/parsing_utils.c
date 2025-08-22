/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:21:27 by megrelli          #+#    #+#             */
/*   Updated: 2025/07/22 18:57:27 by megrelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"

int	ft_check_map(int fd, char *buffer, t_map *map)
{
	int	i;

	i = 0;
	while (i < 32)
	{
		buffer[i] = '\0';
		i++;
	}
	if (!check_first_line(fd, map, buffer))
	{
		close(fd);
		return (0);
	}
	return (1);
}

int	ft_malloc(t_map *map, int row)
{
	map->tab[row] = malloc(4096);
	if (!map->tab[row])
		return (0);
	return (1);
}
