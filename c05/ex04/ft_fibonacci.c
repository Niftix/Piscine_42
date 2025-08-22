/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mville <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 18:45:10 by mville            #+#    #+#             */
/*   Updated: 2025/07/09 18:55:53 by mville           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_fibonacci(int index)
{
	int	total;

	if (index < 0)
		return (-1);
	if (index == 1 || index == 2)
		return (1);
	else
	total = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (total);
}

/*int main()
{
	int	fibo;
	int	total;
	total = 0;
	fibo = 8;
	total = ft_fibonacci(fibo);
	printf("%d", total);
	return 0;
}*/
