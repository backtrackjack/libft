/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:03:15 by jsellars          #+#    #+#             */
/*   Updated: 2021/09/08 17:14:04 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
strlcat() appends string src to the end of dst.  It will append at most 
dstsize - strlen(dst) - 1 characters. It will then NUL-terminate, unless dstsize
is 0 or the original dst string was longer than dstsize (in practice this should
not happen as it means that either dstsize is incorrect or that dst is not a 
proper string).

strlcat() takes the full size of the destination buffer and guarantee
NUL-termination if there is room.  Note that room for the NUL should be included 
in dstsize.

strlcat() returns the initial length of dst + the length of src
- man strlcat

check if dst string is longer than dst and if so break out the function.
while not at the end of src and length of dst is within dstsize bounds - 
append src[i] to dst[j].
null terminate and return dst length + length from wherever src stopped.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = 0;
	j = ft_strlen(dst);
	while (src[i] != '\0' && (j + 1) < dstsize)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
