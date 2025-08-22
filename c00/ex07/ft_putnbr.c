/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mville <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 11:47:11 by mville            #+#    #+#             */
/*   Updated: 2025/07/03 16:44:04 by mville           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	last;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb *= -1;
		write (1, "-", 1);
	}
	if (nb <= 9 && nb >= 0)
	{
		last = '0' + nb;
		write (1, &last, 1);
		return ;
	}
	ft_putnbr (nb / 10);
	last = '0' + (nb % 10);
	write (1, &last, 1);
}
/*
int	main(void)
{
	int	nb;

	nb = -2147483648;
	ft_putnbr(nb);
	return (0);
}
*/
