/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankewi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:56:14 by mpankewi          #+#    #+#             */
/*   Updated: 2022/11/05 16:07:24 by mpankewi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (start < ft_strlen(s))
		len = len + start;
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (start < len)
		sub = malloc(sizeof(char) * (len - start + 1));
	else
		sub = malloc(sizeof(char));
	if (!sub)
		return (NULL);
	i = start;
	while (i < len && s[i])
	{
		sub[i - start] = s[i];
		i++;
	}
	sub[i - start] = '\0';
	return (sub);
}
