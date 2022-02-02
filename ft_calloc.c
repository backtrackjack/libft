/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:25:17 by jsellars          #+#    #+#             */
/*   Updated: 2021/09/08 18:05:13 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <errno.h>

/*
calloc: contiguously allocates enough space for count objects that are size
bytes of emory each and returns a pointer to the allocated memory. The allocated
memory is filled with bytes of value zero. If successful calloc returns a pointer
to allocated memory. If there is an error they return a NULL pointer and set
errno to ENOMEM

*/
void	*ft_calloc(size_t count, size_t size)
{
	void	*rmem;

	rmem = malloc(count * size);
	if (rmem == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_bzero(rmem, count * size);
	return (rmem);
}
