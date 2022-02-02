/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 20:23:12 by jsellars          #+#    #+#             */
/*   Updated: 2021/09/15 15:15:24 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
strrchr: locates the last occurrence of c in string s
- man strrchr

declare variable to hold return value. initialise to NULL which will be returned
if c is NOT found. if the first character matches c then set the return value
to it. iterate through s in case there are more matches to find the furthest
instance of c.
*/
char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	if (*s == (char)c)
		ptr = (char *)s;
	while (*s++)
	{
		if (*s == (char)c)
			ptr = (char *)s;
	}
	return (ptr);
}
