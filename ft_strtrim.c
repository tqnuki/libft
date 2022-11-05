/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankewi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:56:47 by mpankewi          #+#    #+#             */
/*   Updated: 2022/11/05 15:30:34 by mpankewi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	is_set(const char c, const char *set)
{
	int	i;

	i = 0;
	if (set)
	{
		while (set[i])
		{
			if (set[i] == c)
				return (1);
			i++;
		}
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;
	int		k;

	k = 0;
	i = 0;
	if (s1)
	{
		j = ft_strlen(s1);
		while (is_set(s1[i], set) == 1 && s1[i])
			i++;
		while (is_set(s1[j - 1], set) == 1 && j > i)
			j--;
		res = malloc(sizeof(char) * (j - i + 1));
		if (!res)
			return (NULL);
		if (i > j)
			return (res);
		while (i < j)
			res[k++] = s1[i++];
		res[k] = '\0';
		return (res);
	}
	return (NULL);
}
