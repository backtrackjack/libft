/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:09:36 by jsellars          #+#    #+#             */
/*   Updated: 2021/09/08 16:09:40 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
isalpha: tests for any character for which isupper(3) or islower(3) is true.
-man isalpha

as islower and isupper aren't part of scope for libft, function just searches
in ascii range for a-z and A-Z
*/
int	ft_isalpha(int c)
{
	if ((c < 123 && c > 96) || (c < 91 && c > 64))
	{
		return (1);
	}
	return (0);
}
