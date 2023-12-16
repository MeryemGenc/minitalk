/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgencali <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:49:12 by mgencali          #+#    #+#             */
/*   Updated: 2022/10/27 15:41:02 by mgencali         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	arr_len(char const *arr, char c)
{
	size_t	index;

	index = 0;
	while (*arr)
	{
		index++;
		while (*arr && *arr == c)
			arr++;
		if (*arr == '\0')
			index--;
		while (*arr && *arr != c)
			arr++;
	}
	return (index);
}

static char	**transfer_arr(char **dst, char const *src, char c)
{
	size_t	len;
	size_t	i;

	i = 0;
	while (*src)
	{
		if (*src != c)
		{
			len = 0;
			while (*src && *src != c)
			{
				len++;
				src++;
			}
			dst[i++] = ft_substr(src - len, 0, len);
		}
		else
			src++;
	}
	dst[i] = 0;
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**split_string;
	size_t	len_words;

	if (!s)
		return (NULL);
	len_words = arr_len(s, c);
	split_string = malloc(sizeof(char *) * (len_words + 1));
	if (!split_string)
		return (NULL);
	split_string = transfer_arr(split_string, s, c);
	return (split_string);
}
/*
int     main()
{
    char a[] = "hello-people-how-are-you";
    char b = '-';
    char **c = ft_split(a, b);
    printf("%s\n%s\n%s\n%s\n%s", c[0], c[1], c[2], c[3], c[4]);
    return 0;
} */
