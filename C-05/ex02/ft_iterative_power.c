/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:33:26 by adapassa          #+#    #+#             */
/*   Updated: 2023/11/22 15:33:29 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	tmp;

	i = 2;
	tmp = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (i <= power)
	{
		nb = nb * tmp;
		i++;
	}
	return (nb);
}
//int main()
//{
//   ft_iterative_power(16, 4);
//   return 0;
//}
