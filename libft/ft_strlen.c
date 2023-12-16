/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgencali <mgencali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:05:40 by mgencali          #+#    #+#             */
/*   Updated: 2023/02/25 15:14:21 by mgencali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	a;

	a = 0;
	while (s[a])
	{
		a++;
	}
	return (a);
}
/*
int main()
{
    char a[] = "hshjhkjhsaaaaa";
    char b[3];

    printf("%d",ft_strlen(a));
    return 0;
} */
