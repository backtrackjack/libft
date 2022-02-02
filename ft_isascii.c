/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:09:43 by jsellars          #+#    #+#             */
/*   Updated: 2021/09/08 16:12:30 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
isascii(): tests for an ASCII character, which is any character between 0 and 127
inclusive. - man isascii

returns true(1) if ascii
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c < 128)
	{
		return (1);
	}
	return (0);
}
