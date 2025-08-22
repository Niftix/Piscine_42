/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mville <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 12:58:24 by mville            #+#    #+#             */
/*   Updated: 2025/07/07 17:40:17 by mville           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*hex;
	int		i;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			write (1, &str[i], 1);
		else
		{
			write (1, "\\", 1);
			write (1, &hex[(unsigned char)str[i] / 16], 1);
			write (1, &hex[(unsigned char)str[i] % 16], 1);
		}
		i++;
	}
}

/*int main ()
{
	char *str = "Hello\nHow are you?";
	ft_putstr_non_printable(str);
	return 0;
}*/
