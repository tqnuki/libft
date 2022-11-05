/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankewi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:02:38 by mpankewi          #+#    #+#             */
/*   Updated: 2022/11/03 09:55:47 by mpankewi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*source;

	if (!src && !dst)
		return (dst);
	dest = (char *) dst;
	source = (const char *) src;
	if (dest > source)
		while (len--)
			dest[len] = source[len];
	else
		while (len--)
			*dest++ = *source++;
	return (dst);
}
