/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:27:14 by adapassa          #+#    #+#             */
/*   Updated: 2023/11/18 16:33:01 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

void	print_top(int i, int x)
{
	if (i == 1)
		ft_putchar('/');
	else if (i == x)
		ft_putchar('\\');
	else
		ft_putchar('*');
}

void	print_mid(int i, int x)
{
	if (i == 1 || i == x)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	print_bottom(int i, int x)
{
	if (i == 1)
		ft_putchar('\\');
	else if (i == x)
		ft_putchar('/');
	else
		ft_putchar('*');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (x > 211 || y > 1000)
		ft_putstr("Error, input too big for screen size!\n");
	else if (x < 0 || y < 0)
		ft_putstr("Error, input must be positive!\n");
	else
	{
		while (j <= y)
		{
			i = 1;
			while (i <= x)
			{
				if (j == 1)
					print_top(i, x);
				else if (j == y)
					print_bottom(i, x);
				else
					print_mid(i, x);
				i++;
			}
			ft_putchar('\n');
			j++;
		}
	}
}
