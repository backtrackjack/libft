/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:10:50 by jsellars          #+#    #+#             */
/*   Updated: 2021/10/13 16:30:52 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Function to check if a character is a space. returns 0 if false
static int	isspace(char c)
{
	if (c == '\t' || c == '\n')
		return (1);
	if (c == '\v' || c == '\f')
		return (1);
	if (c == '\r' || c == ' ')
		return (1);
	return (0);
}

/*
atoi (ie Array to Ingeger) first iterates through the given string argument
until it hits a '-', '+' or digit.if the first non-space is a '-' then the 
isneg boolean will flip, indicating the integer to return will be negative.
if there are no digits or the character after the first '+' or '-' is not a 
digit. function will return 0. for each digit, multiply the result by 10 to 
make room to append the next digit.
*/
int	ft_atoi(const char *str)
{
	const char	*s;
	long		result;
	int			neg;

	neg = 1;
	s = str;
	result = 0;
	while (*s && isspace(*s))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			neg = -1;
		s++;
	}
	while (*s && (*s >= '0' && *s <= '9'))
	{
		result = 10 * result + *s - '0';
		s++;
	}
	return (result * neg);
}
