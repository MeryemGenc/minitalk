/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgencali <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:09:35 by mgencali          #+#    #+#             */
/*   Updated: 2022/10/27 14:12:45 by mgencali         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	a;
	size_t	b;

	if (!little[0])
		return ((char *)big);
	a = 0;
	while (big[a])
	{
		b = 0;
		while (big[a + b] == little[b] && a + b < len)
		{
			if (!big[a + b] || !little[b])
			{
				return ((char *)big + a);
			}
			b++;
		}
		if (!little[b])
		{
			return ((char *)big + a);
		}
		a++;
	}
	return (0);
}
/*
int main()
{
    char a[] = "hgfdqwertyu";
    char b[] = "qwer";

    printf("%s", ft_strnstr(a, b, 15));
    return 0;
} */
