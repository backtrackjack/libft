/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:36:07 by jsellars          #+#    #+#             */
/*   Updated: 2021/10/13 17:07:18 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
memchr: locates the first occurrence of c (converted to an unsigned char)
in string s. returns a pointer to the byte located, or NULL if no such byte
exists within n bytes.

declare unsigned char version of s to make it accessible
declare a void pointer to return and a size_t iterator
search through s at least n times if s is not empty. assign location of
byte to ptr and break to return statement. returns NULL if it didn't find
the byte.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*ret;

	ch = c;
	ret = (unsigned char *)s;
	while (n > 0)
	{
		if (*ret == ch)
			return ((void *)ret);
		ret++;
		n--;
	}
	return (0);
}
