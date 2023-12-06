/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_params.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:29:48 by adapassa          #+#    #+#             */
/*   Updated: 2023/11/20 15:29:51 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_rev_params(char *str)
{
	ft_putstr(str);
}

int	main(int ac, char **av)
{
	int	i;

	i = ac - 1;
	while (i >= 1)
	{
		ft_rev_params(av[i]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
