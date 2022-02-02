/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:50:46 by jsellars          #+#    #+#             */
/*   Updated: 2021/10/02 15:58:01 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Deletes and frees the given element and every
successor of that element, using the function ’del’
and free(3).
Finally, the pointer to the list must be set to
NULL.

set a variable to hold the previous value. set it to head.
set the head to be the current head's next value and delete
contents of the previous. repeat.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*prev;

	prev = *lst;
	while (*lst)
	{
		*lst = (*lst)->next;
		(*del)(prev->content);
		free(prev);
		prev = *lst;
	}
}
