/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgencali <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:01:57 by mgencali          #+#    #+#             */
/*   Updated: 2022/10/29 18:43:31 by mgencali         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dststart;
	size_t	a;
	size_t	srclen;

	dststart = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dststart + 1 > dstsize)
		return (dstsize + srclen);
	a = 0;
	while (src[a] && a + dststart < dstsize - 1)
	{
		dst[dststart + a] = src[a];
		a++;
	}
	dst[dststart + a] = '\0';
	return (dststart + srclen);
}
