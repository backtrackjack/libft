/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:21:14 by jsellars          #+#    #+#             */
/*   Updated: 2021/10/13 17:40:48 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_strmapi: applies the function 'f' to each character of the string 's' to
create a new string resulting from successive applications of f.

applies the function pointed to by f on each character of s by applying
the iterator to the function during each iteration.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	unsigned int	len;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	str = ft_calloc(sizeof(char), (len + 1));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}
