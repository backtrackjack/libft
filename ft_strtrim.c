/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 12:19:40 by jsellars          #+#    #+#             */
/*   Updated: 2022/02/02 15:23:22 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_strtrim: allocates and returns a copy of s1 with the characters specified
in set removed from the beginning and end of the string.

returns the substring between the start and end indexes. 
if len is 0 or less it means the string is made up of characters from set, if
this is the case. return an empty string using malloc.

is_set(c, *set): checks for instance of c within set
get_start(*s, *set): returns the index of the first non-trimmed char in s
get_end(*s, *set): returns the index of the last non-trimmed char in s

*/

static	int	is_set(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*ret;
	char	*start;
	char	*end;

	if (!s1 || !set)
		return (0);
	start = (char *)s1;
	end = ft_strlen(s1) + start;
	while (*start && is_set(*start, set))
		++start;
	while (start < end && is_set(*(end - 1), set))
		--end;
	ret = ft_substr(start, 0, end - start);
	return (ret);
}
