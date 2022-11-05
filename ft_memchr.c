/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankewi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:04:42 by mpankewi          #+#    #+#             */
/*   Updated: 2022/11/04 11:51:52 by mpankewi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;
	char		ch;

	ch = (char) c;
	i = 0;
	str = (const char *) s;
	while (n > i)
	{
		if (str[i] == ch)
			return ((void *)str + i);
		i++;
	}
	return (0);
}
