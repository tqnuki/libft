/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankewi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:44:39 by mpankewi          #+#    #+#             */
/*   Updated: 2022/11/05 16:22:55 by mpankewi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	wordcount(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static int	wordlen(const char *s, char c, int i)
{
	int	i2;

	i2 = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		i2++;
	}
	return (i2);
}

static char	*putword(const char *str, char charset, int i)
{
	char	*rep;
	int		len;
	int		j;

	j = 0;
	len = wordlen(str, charset, i);
	rep = malloc(sizeof(char) * (len + 1));
	while (str[i] && str[i] != charset)
	{
		rep[j] = str[i];
		j++;
		i++;
	}
	rep[j] = '\0';
	return (rep);
}

char	**ft_split(const char *str, char charset)
{
	char	**rep;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	rep = malloc(sizeof(char *) * (wordcount(str, charset) + 1));
	if (!rep)
		return (NULL);
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] == charset)
			i++;
		if (str[i] != '\0')
			rep[j++] = putword(str, charset, i);
		while (str[i] && str[i] != charset)
			i++;
	}
	rep[j] = 0;
	return (rep);
}
