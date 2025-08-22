/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mville <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:50:14 by mville            #+#    #+#             */
/*   Updated: 2025/07/20 17:54:07 by mville           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	copy_sep(int *k, char *res, char *sep)
{
	int	b;

	b = 0;
	while (sep[b])
	{
		res[*k] = sep[b];
		b++;
		*k += 1;
	}
}

int	ft_is_sep(char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
		i++;
	return (i);
}

int	ft_total_len(char **strs, int size)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			count++;
			j++;
		}
		i++;
	}
	return (count);
}

char	*ft_dup(int size, char **strs, char *sep, char *res)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			res[k] = strs[i][j];
			k++;
			j++;
		}
		if (i < size - 1)
			copy_sep(&k, res, sep);
		i++;
	}
	res[k] = '\0';
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total;
	char	*res;

	if (!strs)
		return (NULL);
	total = ft_total_len(strs, size) + ft_is_sep(sep) * (size - 1);
	if (size == 0)
	{
		res = malloc(sizeof(char));
		if (!res)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	res = malloc(sizeof(char) * (total + 1));
	if (!res)
		return (NULL);
	return (ft_dup(size, strs, sep, res));
}
/*
#include <stdio.h>
int main()
{
	int size = 5;
	char	*sep = "X";
	char *str[] = {"Salut", "a", "tous", "les", "amis"};
	char *test;
	test = ft_strjoin(size, str, sep);
	printf("%s", test);
	return (0);
}*/
