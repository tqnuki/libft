/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankewi <mpankewi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:17:17 by mpankewi          #+#    #+#             */
/*   Updated: 2022/11/07 15:39:46 by mpankewi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nnode;
	t_list	*nlist;
	void	*tmp;

	nlist = NULL;
	if (f == NULL || del == NULL || lst == NULL)
		return (0);
	while (lst)
	{
		tmp = f(lst->content);
		nnode = ft_lstnew(tmp);
		if (!nnode)
		{
			free(tmp);
			ft_lstclear(&nlist, del);
			return (NULL);
		}
		ft_lstadd_back(&nlist, nnode);
		lst = lst->next;
	}
	return (nlist);
}
