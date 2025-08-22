/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mville <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 18:22:25 by mville            #+#    #+#             */
/*   Updated: 2025/07/03 19:06:08 by mville           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 7;
	b = 2;
	div = 0;
	mod = 0;
	ft_div_mod(a,b,&div,&mod);
	printf("a = %d b = %d div = %d mod = %d", a, b, div, mod);
	return 0;

}*/
