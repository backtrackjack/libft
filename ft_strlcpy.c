/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 11:16:19 by jsellars          #+#    #+#             */
/*   Updated: 2022/02/02 15:10:05 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
strlcpy: copies strings with the same input paramaters and output result as
snprintf(3). Takes the full size of the destination buffer and guarantee
NUL-termination if there is room. Note that room for the NUL should be included
in dstsize. strlcpy copies up to dstsize - 1 characters from the string src
to dst, NUL-terminating the result if dstsize is not 0. returns the total length
of the string they tried to create. for strlcpy that means the length of src.
If the return value is >= dstsize, the output string has been truncated.

declare and initialise variable to hold length of src string, to be returned
if dstsize is bigger than srcsize then it is safe to copy the whole contents
of src into the dst. else as long as dst has any room, copy as much from src
as will fit and ensure a NULL terminator.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (*src && i + 1 < dstsize)
	{
		*dst++ = *src++;
		++i;
	}
	if (i < dstsize)
		*dst = 0;
	while (*src++)
		++i;
	return (i);
}
