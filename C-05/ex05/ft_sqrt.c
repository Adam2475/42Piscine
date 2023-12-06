/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 20:59:30 by adapassa          #+#    #+#             */
/*   Updated: 2023/11/28 21:00:47 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power >= 1)
		return (nb *= ft_power(nb, power - 1));
	else
		return (1);
}

int	ft_sqrt(int nb)
{
	int	div;

	div = 1;
	if (nb == 1)
		return (1);
	while (div <= (nb / div))
	{
		if (ft_power(div, 2) == nb)
			return (div);
		div++;
	}
	return (0);
}
int main()
{
    int nbr = 2147483647;
    int holder;
    holder = ft_sqrt(nbr);
    printf("%d\n", holder);
    return 0;
}
