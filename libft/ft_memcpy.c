/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgencali <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:38:23 by mgencali          #+#    #+#             */
/*   Updated: 2022/10/27 13:39:41 by mgencali         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n)
	{
		*(char *)(dest + a) = *(char *)(src + a);
		a++;
	}
	return (dest);
}
/*
int main()
{
    char a[15] = "qwerrrrrrrr";
    char b[] = "tyuiop";
    int c[10] = {1,2,3,4};
    int d[6] = {5,6,7,8,9};
    ft_memcpy(a, b, sizeof(b)); // asil memcpy fonksiyonu ile ayni soonuc 
    ft_memcpy(c, d, sizeof(d));
    printf("%s\n", a);
    printf("%d - %d - %d - %d - %d - %d - %d - %d - %d", 
		c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7], c[8]);
    return 0;
} */
