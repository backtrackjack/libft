/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:54:15 by jsellars          #+#    #+#             */
/*   Updated: 2021/10/13 17:51:33 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Applies the function f to each character of the
string passed as argument, and passing its index
as first argument. Each character is passed by
address to f to be modified if necessary
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	unsigned int	len;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		(*f)(i, s + i);
		i++;
	}
}
