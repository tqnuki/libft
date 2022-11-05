/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankewi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:05:08 by mpankewi          #+#    #+#             */
/*   Updated: 2022/11/05 15:33:34 by mpankewi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*tmp;

	if (lst && del)
	{
		curr = *lst;
		while (curr)
		{
			tmp = curr->next;
			ft_lstdelone(curr, del);
			curr = tmp;
		}
		*lst = NULL;
	}
}
