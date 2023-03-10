/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgencali <mgencali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:45:19 by mgencali          #+#    #+#             */
/*   Updated: 2023/02/25 15:51:26 by mgencali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler(int sig)
{
	static int	chr;
	static int	counter;

	if (sig == SIGUSR1)
		chr |= (1 << counter);
	counter++;
	if (counter == 8)
	{
		ft_putchar_fd(chr, 1);
		counter = 0;
		chr = 0;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	(void)argv;
	if (argc != 1)
	{
		ft_putstr_fd("Wrong arguments! Try Again.", 1);
		return (1);
	}
	pid = getpid();
	ft_putstr_fd("Proccess ID: ", 1);
	ft_putnbr_fd(pid, 1);
	ft_putstr_fd("\nWaiting for message: \n", 1);
	while (argc == 1)
	{
		signal(SIGUSR1, handler);
		signal(SIGUSR2, handler);
		pause();
	}
	return (0);
}
