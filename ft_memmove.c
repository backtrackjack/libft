/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:01:59 by jsellars          #+#    #+#             */
/*   Updated: 2021/10/13 17:04:45 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
memmove: copies len bytes from string src to string dst. The two strings may
overlap; the copy is always done in a non-destructive manner. returns the 
original value of dst. - man memmove

if dst is smaller than src, copy bytes from beginning to len (memcpy). 
else dst must have enough room to store src hence copy backwards to avoid 
overwrite
https://opensource.apple.com/source/BerkeleyDB/BerkeleyDB-6/db/clib/memmove.c
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	if (dst == NULL && src == NULL)
		return (dst);
	if (dst - src > 0)
	{
		d = (char *)(dst + len - 1);
		s = (const char *)(src + len - 1);
		while (len-- > 0)
			*d-- = *s--;
	}
	else
	{
		d = (char *)dst;
		s = (const char *)src;
		while (len-- > 0)
			*d++ = *s++;
	}
	return (dst);
}
