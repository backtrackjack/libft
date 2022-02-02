/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 19:54:25 by jsellars          #+#    #+#             */
/*   Updated: 2021/09/09 20:22:44 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
strchr: locates the first occurence of (char) c in the string pointed to by s.
The terminating null character is considered to be part of the string.
returns a pointer to the located character, or null if not found.

keep incrementing s while the character at the address doesn't match c
return NULL if '\0' occurs after checking c.
*/
char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s++)
			return (NULL);
	}
	return ((char *)s);
}
