/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mville <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 10:50:05 by mville            #+#    #+#             */
/*   Updated: 2025/07/07 10:02:00 by mville           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] = str[i] + 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || !((str[i - 1] >= 'a'
						&& str[i - 1] <= 'z')
					|| (str[i - 1] >= 'A'
						&& str[i - 1] <= 'Z')
					|| (str[i - 1] >= '0'
						&& str[i - 1] <= '9')))
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*int	main()
{
	char	str[] = "hi, how are you? 42words forty-two; fifty+and+one";
	ft_strcapitalize(str);
	int 	i;
	i = 0;
	while(str[i])
	{
		printf("%c", str[i]);
		i++;
	}
	return 0;

}*/
