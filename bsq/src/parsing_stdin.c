/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_stdin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:03:40 by megrelli          #+#    #+#             */
/*   Updated: 2025/07/23 15:49:09 by megrelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"

static int	check_header(char *buf, t_map *map)
{
	int	len;

	len = 0;
	while (buf[len] && buf[len] != '\n')
		len++;
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

static int	extract_row(char *p, t_map *map, int row, int *firstlen)
{
	int	j;

	map->tab[row] = malloc(4096);
	if (!map->tab[row])
		return (0);
	j = 0;
	while (*p && *p != '\n')
	{
		if (!(*p == map->empty || *p == map->obst))
			return (0);
		map->tab[row][j++] = *p;
		p++;
	}
	map->tab[row][j] = '\0';
	if (j == 0)
		return (0);
	if (*firstlen < 0)
		*firstlen = j;
	else if (j != *firstlen)
		return (0);
	return (1);
}

static int	extract_lines(char *p, t_map *map)
{
	int	row;
	int	firstlen;

	row = 0;
	firstlen = -1;
	while (row < map->rows)
	{
		if (!extract_row(p, map, row, &firstlen))
			return (0);
		while (*p && *p != '\n')
			p++;
		if (*p != '\n')
			return (0);
		p++;
		row++;
	}
	map->cols = firstlen;
	return (*p == '\0');
}

int	parse_stdin(t_map *map)
{
	char	buf[100000];
	char	*p;
	int		ret;
	int		total;

	ret = 1;
	total = 0;
	while (ret > 0)
	{
		ret = read(0, buf + total, 99999 - total - 1);
		if (ret > 0)
			total += ret;
	}
	buf[total] = '\0';
	if (!check_header(buf, map))
		return (0);
	p = buf;
	while (*p && *p != '\n')
		p++;
	if (*p == '\n')
		p++;
	map->tab = malloc(sizeof(char *) * map->rows);
	if (!map->tab)
		return (0);
	return (extract_lines(p, map));
}
