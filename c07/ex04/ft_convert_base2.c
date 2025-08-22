/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mville <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:10:01 by mville            #+#    #+#             */
/*   Updated: 2025/07/22 15:36:22 by mville           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	ft_strlen(char *str);
int	valid_base(char *base);

int	ft_count(int nbr, char *base)
{
	long	n;
	int		count;
	int		size;

	n = nbr;
	size = ft_strlen(base);
	count = 0;
	if (n < 0)
		count++;
	while (n)
	{
		count++;
		n /= size;
	}
	return (count);
}

char	*protect_zero(char *base)
{
	char	*str;

	str = malloc(sizeof(char) * 2);
	if (!str)
		return (NULL);
	str[0] = base[0];
	str[1] = '\0';
	return (str);
}

char	*ft_itoa_base(int nbr, char *base, int count, int size)
{
	long			n;
	char			*src;

	n = (long)nbr;
	if (n == 0)
	{
	src = protect_zero(base);
		return (src);
	}
	src = malloc(sizeof(char) * ((count) + 1));
	if (!src)
		return (NULL);
	src[count] = '\0';
	if (n < 0)
	{
		src[0] = '-';
		n *= -1;
	}
	while (n)
	{
		src[--count] = base[n % size];
		n /= size;
	}
	return (src);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		n;
	int		size;
	int		count;
	char	*str;

	if (!valid_base(base_to) || !valid_base(base_from))
		return (NULL);
	n = ft_atoi_base(nbr, base_from);
	count = ft_count(n, base_to);
	size = ft_strlen(base_to);
	str = ft_itoa_base(n, base_to, count, size);
	return (str);
}
