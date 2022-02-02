/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:09:49 by jsellars          #+#    #+#             */
/*   Updated: 2021/09/08 16:14:03 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
isprint(): tests for any printing character, including space. - man isprint

returns true if within the range of printable characters in ascii table.
*/
int	ft_isprint(int c)
{
	if (c < 127 && c > 31)
	{
		return (1);
	}
	return (0);
}
