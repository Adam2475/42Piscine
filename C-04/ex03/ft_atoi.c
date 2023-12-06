/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:18:40 by adapassa          #+#    #+#             */
/*   Updated: 2023/11/20 15:18:43 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	container;
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	container = 0;
	while (str[i] == '\r' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= (-1);
		else
			sign *= 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		container = container * 10 + (str[i] - 48);
		i++;
	}
	return (container * sign);
}
