/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:09:07 by jsellars          #+#    #+#             */
/*   Updated: 2021/09/08 15:21:15 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The isalnum() function tests for any character for which isalpha(3) or isdigit(3)
is true.  The value of the argument must be representable as an unsigned char or
the value of EOF. - man isalnum

return true if isalpha OR isdigit returns true. else return false.
*/
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
	{
		return (1);
	}
	return (0);
}
