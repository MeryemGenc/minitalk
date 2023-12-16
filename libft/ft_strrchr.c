/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgencali <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:13:06 by mgencali          #+#    #+#             */
/*   Updated: 2022/10/27 14:14:02 by mgencali         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	a;

	a = (int)ft_strlen(s);
	while (a >= 0)
	{
		if (s[a] == (char)c)
			return ((char *)(s + a));
		a--;
	}
	return (0);
}
/*
int main()
{
    char a[] = "qwertyuoop";
    printf("%s",ft_strrchr(a,'o'));

    return 0;
} */
