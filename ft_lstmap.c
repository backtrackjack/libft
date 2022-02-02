/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:30:06 by jsellars          #+#    #+#             */
/*   Updated: 2021/10/06 15:35:54 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Iterates 'lst' and applies the function
'f' to the content of each element. Creates a new
list resulting of the successive applications of
the function 'f'. The 'del' function is used to
delete the content of an element if needed.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*retlst;
	t_list	*temp;

	if (!(*f))
		return (NULL);
	retlst = NULL;
	while (lst)
	{
		temp = ft_lstnew((*f)(lst->content));
		if (!temp)
		{
			ft_lstclear(&retlst, del);
			return (NULL);
		}
		ft_lstadd_back(&retlst, temp);
		lst = lst->next;
	}
	return (retlst);
}
