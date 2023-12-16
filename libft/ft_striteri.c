/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgencali <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:31:52 by mgencali          #+#    #+#             */
/*   Updated: 2022/10/20 15:33:34 by mgencali         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	len;
	unsigned int	i;

	if (!s || !f)
		return ;
	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		f(i, (s + i));
		i++;
	}
}
/*
 strmapi farkı => fonksiyona her karakterin adresi yollanir.
 strmap te => degisen diziden yeni dizi yaratilir
 striteri => degisiklikler mevcut dizi uzerinde uygulanir.
*/
