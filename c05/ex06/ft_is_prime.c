/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mville <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 11:16:07 by mville            #+#    #+#             */
/*   Updated: 2025/07/10 11:18:43 by mville           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_prime(int nb, int div)
{
	if (div * div > nb)
		return (1);
	if (nb % div == 0)
		return (0);
	return (ft_prime(nb, div + 1));
}

int	ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	return (ft_prime(nb, 2));
}
/*
int	main(void)
{
	int	result;
	result = ft_is_prime(16);
	if (result == 1)
	printf("Prime");
	else
	printf("Not Prime");
	return (0);
}*/
