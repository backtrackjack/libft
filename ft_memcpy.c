/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 18:07:57 by jsellars          #+#    #+#             */
/*   Updated: 2021/10/13 15:43:37 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
memcpy: copies n bytes from memory area src to memory area dst. if dst and src
overlap, behaviour is undefined. returns original value of dst - man memcpy

create unsigned char versions of dst and src to make accessible with bytes
iterate through n types copying a bytes worth of srccpy to dstcpy each time.
cast a void pointer version of dstcpy to dst and return it.
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*srccpy;
	unsigned char	*dstcpy;

	dstcpy = (unsigned char *)dst;
	srccpy = (unsigned char *)src;
	if (dstcpy == NULL && srccpy == NULL)
		return (dstcpy);
	while (n > 0)
	{
		*dstcpy++ = *srccpy++;
		n--;
	}
	return (dst);
}
