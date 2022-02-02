/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:09:59 by jsellars          #+#    #+#             */
/*   Updated: 2021/09/08 16:21:21 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
toupper: If the argument is a lower-case letter, the toupper() function returns
the corresponding upper-case letter if there is one; other-wise, the argument is
returned unchanged. - man toupper

check if lower-case and if true, make it uppercase.
*/
int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
	{
		return (c - 32);
	}
	return (c);
}
