/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgencali <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:33:51 by mgencali          #+#    #+#             */
/*   Updated: 2022/10/20 15:38:43 by mgencali         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	i;
	char			*str;

	if (!s)
		return (0);
	len = ft_strlen(s);
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (0);
	i = 0;
	while (i < len)
	{
		*(str + i) = *(s + i);
		*(str + i) = (*f)(i, *(str + i));
		i++;
	}
	*(str + i) = '\0';
	return (str);
}
/*
int main()
{
    char arr[] = "abcdefg";
    unsigned int a = 5;
    char *b;
    //printf("%d", tmp_func(a, arr[0]));
    printf("%d", ft_strmapi(arr, tmp_func(a, 'a')));
    return 0;
} */
