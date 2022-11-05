/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankewi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:08:18 by mpankewi          #+#    #+#             */
/*   Updated: 2022/11/02 12:08:22 by mpankewi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	a;
	int	s;
	int	n;

	a = 0;
	s = 1;
	n = 0;
	while (str[a] == '\t' || str[a] == '\n' || str[a] == '\v'
		|| str[a] == '\f' || str[a] == '\r' || str[a] == ' ')
		a++;
	if (str[a] == '-')
		s = -1;
	if (str[a] == '-' || str[a] == '+')
		a++;
	while (ft_isdigit(str[a]) && str[a])
		n = (n * 10) + (str[a++] - '0');
	return (n * s);
}
