/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:53:32 by jsellars          #+#    #+#             */
/*   Updated: 2021/10/14 12:13:42 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must be
ended by a NULL pointer. returns array of new
strings or NULL if unsuccessful.

intialise an array of character pointers by counting the words (pointers) 
and allocating the space for that many words. find the start and end
indexes to create parameters for substrings. ensure that the next 
start index will begin at the previous end index

indexes[0] = start index
indexes[1] = end index

*/
static void	*free_all(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

static int	get_wc(char const *s, char c)
{
	int	i;
	int	count;
	int	flip;

	flip = 1;
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && flip)
		{
			count++;
			flip = 0;
		}
		else if (s[i] == c)
			flip = 1;
		i++;
	}
	return (count);
}

static void	get_indexes(int *indexes, char const *s, char c)
{
	while (s[indexes[0]] == c && indexes[0] != (int)ft_strlen(s))
		indexes[0]++;
	indexes[1] = indexes[0];
	while (s[indexes[1]] != c && indexes[1] != (int)ft_strlen(s))
		indexes[1]++;
}

char	**ft_split(char const *s, char c)
{
	char		**return_arr;
	int			len;
	int			indexes[2];
	char		**temp;

	if (s == NULL)
		return (NULL);
	len = get_wc(s, c);
	ft_bzero(indexes, sizeof(int) * 2);
	return_arr = ft_calloc(sizeof(char *), len + 1);
	if (return_arr == NULL)
		return (NULL);
	temp = return_arr;
	while (len--)
	{
		get_indexes(indexes, s, c);
		if (indexes[1] - indexes[0] == 0)
			break ;
		*return_arr = ft_substr(s, indexes[0], (indexes[1] - indexes[0]));
		if (*return_arr == NULL)
			return (free_all(return_arr));
		indexes[0] = indexes[1];
		return_arr++;
	}
	return (temp);
}
