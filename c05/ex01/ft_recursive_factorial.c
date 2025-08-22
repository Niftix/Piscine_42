/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mville <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 17:11:30 by mville            #+#    #+#             */
/*   Updated: 2025/07/09 17:12:07 by mville           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	factorial = ft_recursive_factorial(nb - 1) * nb;
	return (factorial);
}

/*int main()
{
	int	i;
	int	total;
	i = 1;
	total = ft_recursive_factorial(i);
	printf("%d", total);
	return 0;
	
}*/
