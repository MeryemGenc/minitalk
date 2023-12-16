/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgencali <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:46:50 by mgencali          #+#    #+#             */
/*   Updated: 2022/10/27 13:47:33 by mgencali         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n)
	{
		((unsigned char *)s)[a] = c;
		a++;
	}
	return (s);
}
/*
int main()
{
    char a[] = "qwertyu";

    printf("%s", ft_memset(a, 'x', 4));
    return 0;
}*/
