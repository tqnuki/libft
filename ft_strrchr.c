/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankewi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:57:10 by mpankewi          #+#    #+#             */
/*   Updated: 2022/11/04 14:31:28 by mpankewi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ch;

	ch = (char) c;
	i = 0;
	while (s[i])
		i++;
	if (s[i] == ch)
		return ((char *) &s[i]);
	while (i > 0)
		if (s[--i] == ch)
			return ((char *) &s[i]);
	return (0);
}
