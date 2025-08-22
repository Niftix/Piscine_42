/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mville <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 18:36:42 by mville            #+#    #+#             */
/*   Updated: 2025/07/11 21:43:24 by mville           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_recursive_power(int nb, int power)
{
	int	total;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	total = nb * ft_recursive_power(nb, power -1);
	return (total);
}

/*int main()
{
	int	total;
	int	nb;
	int	power;
	nb = 2;
	power = 4;
	total = ft_recursive_power(nb, power);
	printf("%d", total);
	return 0;
}*/
