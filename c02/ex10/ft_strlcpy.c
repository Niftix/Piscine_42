/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mville <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 12:08:08 by mville            #+#    #+#             */
/*   Updated: 2025/07/07 17:43:44 by mville           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	strlen;

	i = 0;
	strlen = ft_strlen(src);
	if (size != 0)
	{
		while (src[i] && i < (size - 1))
		{
		dest[i] = src[i];
		i++;
		}
		dest[i] = '\0';
	}
	return (strlen);
}
/*
int main(void)
{
	char	dest[100];
	char	src[] = "Je suis la pour faire FT_STRCPY !";
	unsigned int		size = 100;
	printf("%s\n", dest);
	ft_strlcpy(dest, src, size);
	printf("%s\n", dest);
	return 0;
}*/
