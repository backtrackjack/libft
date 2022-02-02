/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:30:32 by jsellars          #+#    #+#             */
/*   Updated: 2021/09/08 15:17:26 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
bzero: writes n zeroed bytes to the string s. If n is zero function does nothing.
treat address s as an unsigned char (BYTE) pointer to make it accessible.
- man bzero

write '\0' for n times using i as iterator.
*/
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*c;
	size_t			i;

	c = s;
	i = 0;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
}
