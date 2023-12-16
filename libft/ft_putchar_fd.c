/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgencali <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:31:11 by mgencali          #+#    #+#             */
/*   Updated: 2022/10/20 15:31:25 by mgencali         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
    creat("test.txt", O_CREAT | S_IRWXU);
	int	fd = open ("test.txt", O_WRONLY);
	ft_putchar_fd('c',fd);
}
*/
