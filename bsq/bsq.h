/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:04:08 by megrelli          #+#    #+#             */
/*   Updated: 2025/07/22 19:02:14 by megrelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

typedef struct s_map
{
	int		rows;
	int		cols;
	char	empty;
	char	obst;
	char	full;
	char	**tab;
}	t_map;

typedef struct s_square
{
	int	size;
	int	row;
	int	col;
}	t_square;

t_square	solve_bsq(t_map *map);
int			parse_map(char *filename, t_map *map);
int			parse_stdin(t_map *map);
int			**allocate_size_table(int rows, int cols);
int			ft_strlen(char *str);
int			ft_atoi(char *str, int len);
int			min3(int a, int b, int c);
int			ft_check_map(int fd, char *buffer, t_map *map);
int			ft_malloc(t_map *map, int row);
int			check_first_line(int fd, t_map *map, char *buf);
void		free_size_table(int **table, int rows);
void		print_map(t_map *map, t_square sq);
void		free_map(t_map *map);

#endif
