/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mville <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:36:51 by mville            #+#    #+#             */
/*   Updated: 2025/07/16 09:20:24 by mville           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	verif_base(char *base)
{
	int	i;
	int	len;
	int	duplicate[256];

	if (!base)
		return (0);
	len = ft_strlen(base);
	i = 0;
	while (i < 256)
	{
		duplicate[i++] = 0;
	}
	i = 0;
	if (len < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (duplicate[(unsigned char)base[i]] == 1)
			return (0);
		duplicate[(unsigned char)base[i]] = 1;
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	long	size;
	char	c;

	size = ft_strlen(base);
	nb = nbr;
	if (!verif_base(base))
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= size)
		ft_putnbr_base(nb / size, base);
	c = base[nb % size];
	write(1, &c, 1);
	return ;
}
/*
int main()
{
	int	nbr;
	char *base = "0123456789abcdef";
	nbr = 123456;
	ft_putnbr_base(nbr,base);
	return 0;
}*/
