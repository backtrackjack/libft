/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:18:45 by jsellars          #+#    #+#             */
/*   Updated: 2021/09/15 15:53:02 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <errno.h>

/*
strdup: allocates sufficient memory for a copy of s1, does the copy and returns
a pointer to it. If insufficient memory is available, NULL is returned and erno
is set to ENOMEM.

allocate memory to fit length of s1 + 1 times characters. use memcpy with the
pointer created as the destination.
*/
char	*ft_strdup(const char *s1)
{
	char	*ptr;

	ptr = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (ptr == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	return ((char *)ft_memcpy(ptr, s1, ft_strlen(s1) + 1));
}
