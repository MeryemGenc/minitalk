/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgencali <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:15:24 by mgencali          #+#    #+#             */
/*   Updated: 2022/10/27 14:16:41 by mgencali         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;

	if (!s1 || !set)
		return (0);
	i = 0;
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	i = ft_strlen(s1) - 1;
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
/*
int main()
{
    char a[] = "++++---hello_people+---++-";
    char b[] = "+-";
    char *c = ft_strtrim(a, b);

    printf("%s",c);

    return 0;
} */
