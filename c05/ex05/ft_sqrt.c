/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mville <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 19:22:59 by mville            #+#    #+#             */
/*   Updated: 2025/07/09 19:23:41 by mville           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	calcul_sqrt(int x, int n)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (0);
	return (calcul_sqrt(x + 1, n));
}

int	ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);
	return (calcul_sqrt(1, nb));
}

/*int main()
{
	int	total;
	total = ft_sqrt(9);
	printf("%d", total);
	return 0;
}*/
