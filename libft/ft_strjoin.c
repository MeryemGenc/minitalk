/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgencali <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:57:31 by mgencali          #+#    #+#             */
/*   Updated: 2022/10/27 14:01:08 by mgencali         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;
	int		s2len;
	int		s1len;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	temp = (char *)malloc(s1len + s2len + 1);
	temp[0] = '\0';
	ft_strlcat(temp, s1, s1len + 1);
	ft_strlcat(temp + s1len, s2, s2len + 1);
	return (temp);
}
/*
int main()
{
    char a[] = "hello_people";
    char b[] = "how are you?";
    char *temp = ft_strjoin(a, b);
    printf("%s", temp);
    free(temp);
    return 0;
} */
