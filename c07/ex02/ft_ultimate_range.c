/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mville <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 11:04:06 by mville            #+#    #+#             */
/*   Updated: 2025/07/17 18:04:32 by mville           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	size;
	int	i;

	i = 0;
	if (min >= max)
	{
	*range = NULL;
		return (0);
	}
	size = max - min;
	tab = malloc(sizeof(int) * size);
	if (!tab)
	{
	*range = NULL;
		return (-1);
	}
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (size);
}
/*
int main()
{
	int	*tab;
	int	i = 0;
	int	size;

	size = ft_ultimate_range(&tab, 5, 9);
	while(i <= size)
	{
	printf("%d", tab[i]);
	i++;
	}
	return 0;
}*/
