/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mville <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 21:09:37 by mville            #+#    #+#             */
/*   Updated: 2025/07/06 14:24:44 by mville           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		else
		i++;
	}
	return (1);
}

/*int main()
{
	char	str[] = "4564f658256";
	int	stock;
	stock = ft_str_is_numeric(str);
	printf("%d", stock);
	return 0;
}*/
