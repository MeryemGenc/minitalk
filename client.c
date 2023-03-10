/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgencali <mgencali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:18:50 by mgencali          #+#    #+#             */
/*   Updated: 2023/02/25 15:40:24 by mgencali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	bit_sender(int pid, char c)
{
	int	counter;

	counter = 0;
	while (counter < 8)
	{
		if ((c & (1 << counter)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		counter++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	if (argc != 3)
	{
		ft_putstr_fd("Wrong Arguments! Try Again.", 1);
		ft_putchar_fd('\n', 1);
		return (1);
	}
	i = 0;
	pid = ft_atoi(argv[1]);
	while (argv[2][i] != '\0')
	{
		bit_sender(pid, argv[2][i]);
		i++;
	}
	bit_sender(pid, '\n');
	return (0);
}
