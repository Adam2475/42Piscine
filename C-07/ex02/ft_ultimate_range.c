/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:16:48 by adapassa          #+#    #+#             */
/*   Updated: 2023/12/01 18:52:55 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*holder;
	int	i;
	int	nb;

	i = 0;
	nb = min;
	holder = (int *)malloc(sizeof(int) * (max - min + 1));
	if (holder == NULL || min >= max)
	{
		*range = NULL;
		return (0);
	}
	while (nb < max)
	{
		holder[i] = nb;
		i++;
		nb++;
	}
	*range = holder;
	return (i);
}
/*int main()
{
	int min = 2;
	int max = 7;
	int **range;
	printf("%d\n", ft_ultimate_range(range, min, max));
	return 0;
}*/
