/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:11:41 by adapassa          #+#    #+#             */
/*   Updated: 2023/11/21 12:14:59 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	tmp;

	i = nb - 1;
	tmp = nb;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (i > 0)
	{
		tmp *= i;
		i--;
	}
	return (tmp);
}
//int main()
//{
//	ft_iterative_factorial(4);
//	return 0;
//}
