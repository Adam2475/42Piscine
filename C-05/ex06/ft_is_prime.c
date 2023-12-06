/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 20:17:36 by adapassa          #+#    #+#             */
/*   Updated: 2023/11/28 20:25:36 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	div;

	div = 2;
	if (nb == 0)
		return (0);
	else if (nb == 1)
		return (0);
	else if (nb < 0)
		return (0);
	while (div < nb)
	{
		if (nb % div == 0 && div != nb)
			return (0);
		div++;
	}
	return (1);
}
/*int main()
{
	printf("%d\n", ft_is_prime(NULL));
	return 0;
}*/
