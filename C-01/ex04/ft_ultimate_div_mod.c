/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:05:38 by adapassa          #+#    #+#             */
/*   Updated: 2023/11/16 12:55:14 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;
	int	mod;

	tmp = *a / *b;
	mod = *a % *b;
	*a = tmp;
	*b = mod;
}
//int main()
//{
//	int a = 10;
//	int b = 6;
//	ft_ultimate_div_mod(&a, &b);
//	printf("%d", a);
//	printf("%d", b);
//	return 0;
//}
