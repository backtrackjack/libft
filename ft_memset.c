/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:14:33 by jsellars          #+#    #+#             */
/*   Updated: 2021/09/08 17:24:03 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
man memset:
writes len bytes of value c (converted to an unsigned char) to the string b
returns its first argument.

copy *b to an unsigned char pointer to make it accessible. then copy
c as an unsigned integer to every byte len times.
*/
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*x;

	x = b;
	while (len > 0)
	{
		*x = (unsigned char) c;
		x++;
		len--;
	}
	return (b);
}
