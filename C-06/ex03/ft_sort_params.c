/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:16:41 by adapassa          #+#    #+#             */
/*   Updated: 2023/11/22 14:16:49 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_sort_params(int ac, char **av)
{
	int	counters[2];
	int	g;
	int	posix;
	int	tmp;

	tmp = 0;
	counters[0] = 1;
	while (counters[0] < ac)
	{
		counters[1] = 1;
		g = 127;
		while (counters[1] < ac)
		{
			if (g > av[counters[1]][0] && av[counters[1]][0] > tmp)
			{
				g = av[counters[1]][0];
				posix = counters[1];
			}
			counters[1]++;
		}
		ft_putstr(av[posix]);
		write(1, "\n", 1);
		tmp = g;
		counters[0]++;
	}
}

int	main(int ac, char **av)
{
	ft_sort_params(ac, av);
	return (0);
}
