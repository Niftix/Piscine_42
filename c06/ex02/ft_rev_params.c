/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mville <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:47:10 by mville            #+#    #+#             */
/*   Updated: 2025/07/10 17:49:04 by mville           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(int nb, char **str)
{
	int	i;
	int	nbr;

	nbr = nb - 1;
	i = 0;
	while (nbr > 0)
	{
		i = 0;
		while (str[nbr][i])
		{
			write(1, &str[nbr][i], 1);
				i++;
		}
		write(1, "\n", 1);
		nbr--;
	}
}

int	main(int argc, char **argv)
{
	ft_rev_params(argc, argv);
	return (0);
}
