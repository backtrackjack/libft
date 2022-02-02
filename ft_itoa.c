/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:49:36 by jsellars          #+#    #+#             */
/*   Updated: 2021/10/13 16:38:47 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_itoa: Allocates and returns a string representing the integer received as
an argument. Negative numbers must be handled.

modulo 10 of n (-10 if negative) + 48 to obtain the trailing digit of n, then
append it to a string initialised as 12 bytes (maximum characters there can be)
reverse the string at the end to match n.
*/
static int	ft_numlen(int n)
{
	int	numlen;

	numlen = 0;
	while (n != 0)
	{
		n = n / 10;
		numlen++;
	}
	return (numlen);
}

static char	*itoa_neg(int n, int i, char *s)
{
	s[i++] = '-';
	while (n / 10 != 0)
	{
		s[i] = -(n % -10) + 48;
		n /= 10;
		i++;
	}
	s[i] = -(n) + 48;
	return (s);
}

static char	*itoa_pos(int n, int i, char *s)
{
	while (n / 10 != 0)
	{
		s[i] = n % 10 + 48;
		n /= 10;
		i++;
	}
	s[i] = n + 48;
	return (s);
}

static char	*reverse_arr(char *arr, int start)
{
	int		last;
	char	temp_value;

	last = ft_strlen(arr) - 1;
	while (last >= start)
	{
		temp_value = arr[start];
		arr[start] = arr[last];
		arr[last] = temp_value;
		start++;
		last--;
	}
	return (arr);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	str = ft_calloc(sizeof(char), ft_numlen(n) + 2);
	if (str == NULL)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		str = itoa_neg(n, i, str);
		str = reverse_arr(str, 1);
	}
	else
	{
		str = itoa_pos(n, i, str);
		str = reverse_arr(str, 0);
	}
	return (str);
}
