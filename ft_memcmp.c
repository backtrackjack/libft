/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:13:22 by jsellars          #+#    #+#             */
/*   Updated: 2021/09/09 16:57:08 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
memcmp: compares byte string s1 against byte string s2. Both strings are assumed
to be n bytes long. returns 0 if strings are identical, otherwise returns the
difference between the first two differing bytes treated as unsigned chars.

declare and initialise accessible pointers and the return value.
iterate through both n times. return (str1[-1] - str2[-1]) because the condition
increments both pointers after checking and therefore needs to return the 
previous values difference.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				diff;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	diff = 0;
	while (n--)
	{
		if (*str1++ != *str2++)
			return ((int)(str1[-1] - str2[-1]));
	}
	return (diff);
}
