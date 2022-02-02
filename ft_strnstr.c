/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:01:01 by jsellars          #+#    #+#             */
/*   Updated: 2021/09/16 11:15:35 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
strnstrn: locates the first occurrence of the null-terminated string needle in
the null-terminated string haystack, where not more than len characters are
searched. Characters that appear after a '\0' character are not searched. If
needle is an empty string, haystack is returned; if needle occurs nowhere in
haystack, NULL is returned; otherwise a pointer to the first character of the
first occurrence of needle is returned. -man strnstr

check that needle is NULL, if true return haystack. Iterate through haystack,
stop if a haystack character matches the first character of needle. Iterate
through both while matching and if the whole needle wasn't found, reset the
iterators.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[++i] != '\0' && len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (needle[j] == haystack[i + j] && len)
			{
				if (needle[j + 1] == '\0')
					return ((char *)&haystack[i]);
				len--;
				j++;
			}
		}
		len += (size_t)j - 1;
	}
	return (NULL);
}
