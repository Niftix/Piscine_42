/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mville <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 15:30:04 by mville            #+#    #+#             */
/*   Updated: 2025/07/14 15:33:57 by mville           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*copy;
	int		i;
	int		size;

	i = 0;
	size = ft_strlen(str);
	copy = malloc(sizeof(char) * (size + 1));
	if (!copy)
		return (NULL);
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		return 1;
	}
	char	*cpy;
	cpy = ft_strdup(argv[1]);
	printf("%s", cpy);
	return 0;
}*/
