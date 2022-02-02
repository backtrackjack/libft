/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:09:56 by jsellars          #+#    #+#             */
/*   Updated: 2021/09/08 16:20:10 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
tolower: If the argument is an upper-case letter, the tolower() function returns
the corresponding lower-case letter if there is one; other-wise, the argument
is returned unchanged. - man tolower

check if c is upper-case, if true make it lower-case.
*/
int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
	{
		return (c + 32);
	}
	return (c);
}
