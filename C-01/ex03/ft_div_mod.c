/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:24:26 by adapassa          #+#    #+#             */
/*   Updated: 2023/11/16 12:56:03 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}
//int main()
//{
//	int div;
//	int mod;
//	ft_div_mod(4, 2, &div, &mod);
//	printf("%d", div);
//	printf("%d", mod);
//	return 0;
//}
