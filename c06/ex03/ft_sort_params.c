/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mville <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 19:13:32 by mville            #+#    #+#             */
/*   Updated: 2025/07/12 22:09:48 by mville           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstr(int nbr, char **str)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	while (i < nbr)
	{
		j = 0;
		while (str[i][j])
		{
			write(1, &str[i][j], 1);
				j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	ft_sort_params(int nb, char **str)
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	while (i < nb - 1)
	{
		j = 0;
		while (j < nb - 1)
		{
			if (ft_strcmp(str[j], str[j + 1]) > 0)
			{
			temp = str[j];
			str[j] = str[j + 1];
			str[j + 1] = temp;
			}
		j++;
		}
		i++;
	}
	ft_putstr(nb, str);
}

int	main(int argc, char **argv)
{
	ft_sort_params(argc, argv);
	return (0);
}
