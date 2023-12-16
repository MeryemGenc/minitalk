/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgencali <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:04:24 by mgencali          #+#    #+#             */
/*   Updated: 2022/10/29 18:36:38 by mgencali         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	a;

	a = 0;
	if (dstsize > 0)
	{
		while (*src && a + 1 < dstsize)
		{
			*dst++ = *src++;
			a++;
		}
	}
	if (a < dstsize)
		*dst = '\0';
	while (*src++)
		a++;
	return (a);
}
