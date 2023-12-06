/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printcomb2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:23:01 by adapassa          #+#    #+#             */
/*   Updated: 2023/11/14 11:15:35 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	tmp;

	if (nb < 10)
	{
		tmp = nb + '0';
		ft_putchar(tmp);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_printer(int a, int b, int c, int d)
{
	if (!((a == c) && (b == d)))
	{
		ft_putnbr(a);
		ft_putnbr(b);
		ft_putchar(' ');
		ft_putnbr(c);
		ft_putnbr(d);
		if ((a == 9) && (b == 8) && (c == 9) && (d == 9))
			return ;
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	main_exec(int a, int b, int c, int d)
{
	while (a <= 9)
	{
		while (b <= 9)
		{
			while (c <= 9)
			{
				while (d <= 9)
				{
					ft_printer(a, b, c, d);
					d++;
				}
				d = 0;
				c++;
			}
			if (a == 9 && b == 8)
				break ;
			b++;
			c = 0;
			d = b + 1;
		}
		a++;
		b = 0;
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 0;
	b = a;
	c = b;
	d = 1;
	main_exec(a, b, c, d);
}
//int main()
//{
//ft_print_comb2();
//return 0;
//}
