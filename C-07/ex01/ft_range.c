/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:11:43 by adapassa          #+#    #+#             */
/*   Updated: 2023/11/28 17:27:53 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	nb;

	i = 0;
	nb = min;
	if (min >= max)
		return (NULL);
	range = (int *)malloc(sizeof(int) * (max - min + 1));
	while (nb < max)
	{
		range[i] = nb;
		i++;
		nb++;
	}
	return (range);
}
/*int main()
{
	int min = 2;
	int max = 7;
	printf("%s\n", ft_range(min, max));
	return 0;
}*/
