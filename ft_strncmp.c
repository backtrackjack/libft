/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:54:37 by jsellars          #+#    #+#             */
/*   Updated: 2021/09/15 17:00:11 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
strncmp: lexicographically compares null-terminated strings s1 and s2. compares
no more than n characters. characters that appear after '/0' character are not
compared. returns an integer greater than, equal to, or less than 0, according
as the string s1 is greater than, equal to, or less than the string s2. The
comparison is done using unsigned characters, so that '\200' is greater '\0'

iterate through strings until n is exhausted or char i of s1 does not equal
char i of s2. if iteration broke from n exhaustion return 0. if iteration
broke because of different characters, return the difference as unsigned
chars.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n && s1[i] && (s1[i] == s2[i]))
	{
		i++;
		--n;
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
}
