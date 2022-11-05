/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankewi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:59:10 by mpankewi          #+#    #+#             */
/*   Updated: 2022/11/02 11:59:14 by mpankewi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	index;

	index = -1;
	while (++index < size && *dest)
		dest++;
	if (index == size)
		return (index + ft_strlen(src));
	while (++index < size && *src)
		*dest++ = *src++;
	*dest = '\0';
	return (index - 1 + ft_strlen(src));
}
