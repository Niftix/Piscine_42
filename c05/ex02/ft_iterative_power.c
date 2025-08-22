/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mville <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 17:25:07 by mville            #+#    #+#             */
/*   Updated: 2025/07/11 21:41:41 by mville           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_power(int nb, int power)
{
	int	finish;
	int	i;

	i = 0;
	finish = 1;
	if (power < 0)
		return (0);
	while (i < power)
	{
		finish *= nb;
		i++;
	}
	return (finish);
}

/*int main()
{
	int	nb;
	int	puissance;
	int	total;

	puissance = 4;
	nb = 2;
	total = ft_iterative_power(nb, puissance);
	printf("%d", total);
	return 0;
}*/
