/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankewi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:03:14 by mpankewi          #+#    #+#             */
/*   Updated: 2022/11/03 09:55:21 by mpankewi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest;
	const char	*source;

	if (!dst && !src)
		return (dst);
	dest = (char *) dst;
	source = (char *) src;
	while (n)
	{
		*dest++ = *source++;
		n--;
	}
	return (dst);
}
