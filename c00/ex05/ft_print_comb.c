/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mville <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 21:06:16 by mville            #+#    #+#             */
/*   Updated: 2025/07/03 16:42:48 by mville           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putchar(char c, char d, char u)
{
	if (c < d && d < u && c < u)
	{
		write (1, &c, 1);
		write (1, &d, 1);
		write (1, &u, 1);
		if (!(c == '7' && d == '8' && u == '9'))
		{
			write (1, ",", 1);
			write (1, " ", 1);
		}
	}
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	d = '1';
	u = '2';
	while (c < '9')
	{
		while (d <= '9')
		{
			while (u <= '9')
			{
				ft_putchar(c, d, u);
			u++;
			}
			u = '0';
			d++;
		}
		d = '0';
		c++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
