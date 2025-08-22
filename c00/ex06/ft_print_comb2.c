/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mville <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 09:58:28 by mville            #+#    #+#             */
/*   Updated: 2025/07/03 16:43:33 by mville           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int l, int r)
{
	char	ld;
	char	lu;
	char	rd;
	char	ru;

	ld = (l / 10) + '0';
	lu = (l % 10) + '0';
	rd = (r / 10) + '0';
	ru = (r % 10) + '0';
	if (l < r)
	{
		write (1, &ld, 1);
		write (1, &lu, 1);
		write (1, " ", 1);
		write (1, &rd, 1);
		write (1, &ru, 1);
		if (!(l == 98 && r == 99))
		{
			write (1, ",", 1);
			write (1, " ", 1);
		}
	}
}

void	ft_print_comb2(void)
{
	int	l;
	int	r;

	l = 0;
	r = 0;
	while (l <= 99)
	{
		while (r <= 99)
		{
			ft_putchar(l, r);
		r++;
		}
		r = 0;
		l++;
	}
}

/*int	main ()
{
	ft_print_comb2();
	return (0);
}*/
