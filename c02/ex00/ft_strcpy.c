/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mville <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 11:54:13 by mville            #+#    #+#             */
/*   Updated: 2025/07/07 17:47:00 by mville           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
void	ft_print(char *dest)
{
	int	i;

	i = 0;
	while(dest[i])
	{
		printf("%c", dest[i]);
			i++;
	}
}

int main (void)
{
	char	dest[] = "Bonjour";
	char	src[] = "Salut";
	ft_strcpy(dest,src);
	ft_print(dest);
	return 0;
}*/
