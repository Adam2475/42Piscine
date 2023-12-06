/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:37:18 by adapassa          #+#    #+#             */
/*   Updated: 2023/11/28 20:58:11 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power >= 1)
		return (nb *= ft_recursive_power(nb, power - 1));
	else
		return (1);
}
//int main()
//{
//    printf("%d\n",ft_recursive_power(16, 4));
//    return 0;
//}
