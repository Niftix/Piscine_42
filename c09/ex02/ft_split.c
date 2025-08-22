/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mville <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:56:54 by mville            #+#    #+#             */
/*   Updated: 2025/07/21 10:09:21 by mville           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	word_count(char *str, char *sep)
{
	int	words;
	int	count;

	words = 0;
	count = 0;
	while (*str)
	{
		if (!is_sep(*str, sep) && !words)
		{
			words = 1;
			count++;
		}
		else if (is_sep(*str, sep))
			words = 0;
		str++;
	}
	return (count);
}

char	*word_dup(char *str, int len)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_core_split(char *str, char *charset, char **res, int i)
{
	int		len;
	char	*word;

	while (*str)
	{
		if (!is_sep(*str, charset))
		{
			len = 0;
			while (str[len] && !is_sep(str[len], charset))
				len++;
			word = word_dup(str, len);
				res[i++] = word;
				str += len;
		}
		else
			str++;
	}
	res[i] = 0;
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**res;

	i = 0;
	if (!str || !charset)
		return (NULL);
	res = malloc(sizeof(char *) * (word_count(str, charset) + 1));
	if (!res)
		return (NULL);
	res = ft_core_split(str, charset, res, i);
	return (res);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
	(void)argc;
	int i = 0;
	char **total;
	char *sep = "\f\t\n\r\v ";

	total = ft_split(argv[1], sep);
	while (total[i])
	{
		printf("%s \n", total[i]);
		i++;
	}
}*/
