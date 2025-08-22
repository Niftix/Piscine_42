/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:05:42 by megrelli          #+#    #+#             */
/*   Updated: 2025/07/22 19:01:09 by megrelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"

int	check_first_line(int fd, t_map *map, char *buf)
{
	int		len;
	char	c;

	len = 0;
	while (read(fd, &c, 1) == 1 && c != '\n')
		buf[len++] = c;
	buf[len] = '\0';
	if (len < 4)
		return (0);
	map->empty = buf[len - 3];
	map->obst = buf[len - 2];
	map->full = buf[len - 1];
	if (map->empty == map->obst || map->empty == map->full
		|| map->obst == map->full)
		return (0);
	map->rows = ft_atoi(buf, len - 3);
	return (map->rows > 0);
}

static int	read_row(int fd, t_map *map, int row, int *firstlen)
{
	int		j;
	int		length;
	char	c;

	if (!ft_malloc(map, row))
		return (0);
	j = 0;
	while (read(fd, &c, 1) == 1 && c != '\n')
	{
		if (!(c == map->empty || c == map->obst))
			return (0);
		map->tab[row][j++] = c;
	}
	map->tab[row][j] = '\0';
	if (j == 0)
		return (0);
	if (*firstlen < 0)
		length = j;
	else
		length = *firstlen;
	if (*firstlen < 0)
		*firstlen = j;
	else if (j != length)
		return (0);
	return (1);
}

static int	read_lines(int fd, t_map *map)
{
	int		i;
	int		firstlen;
	char	c;

	firstlen = -1;
	i = 0;
	while (i < map->rows)
	{
		if (!read_row(fd, map, i, &firstlen))
			return (0);
		i++;
	}
	if (read(fd, &c, 1) == 1)
		return (0);
	map->cols = firstlen;
	return (1);
}

int	parse_map(char *filename, t_map *map)
{
	int		fd;
	char	buffer[32];

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	if (!ft_check_map(fd, buffer, map))
		return (0);
	map->tab = malloc(sizeof(char *) * map->rows);
	if (map->tab == NULL)
	{
		close(fd);
		return (0);
	}
	if (!read_lines(fd, map))
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (1);
}

void	free_map(t_map *map)
{
	int	i;

	i = 0;
	while (i < map->rows)
		free(map->tab[i++]);
	free(map->tab);
}
