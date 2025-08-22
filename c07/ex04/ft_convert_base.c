/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mville <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:06:21 by mville            #+#    #+#             */
/*   Updated: 2025/07/20 16:02:20 by mville           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	valid_base(char *base)
{
	int	tab[256];
	int	i;

	if (!base || ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (i < 256)
	{
		tab[i] = 0;
		i++;
	}
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+'
			|| base[i] <= 32 || base[i] >= 127 || tab[(unsigned char)base[i]])
			return (0);
		tab[(unsigned char)base[i]] = 1;
		i++;
	}
	return (1);
}

int	in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	skip(char *str, int *sign)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign *= -1;
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	res;
	int	sign;
	int	cursor;

	if (!valid_base(base))
		return (0);
	i = 0;
	res = 0;
	sign = 1;
	i = skip(str, &sign);
	cursor = in_base(str[i], base);
	while (cursor != -1)
	{
		res = res * ft_strlen(base) + cursor;
		i++;
		cursor = in_base(str[i], base);
	}
	return (res * sign);
}
