/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:55:56 by adapassa          #+#    #+#             */
/*   Updated: 2023/11/19 14:09:01 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	count;

	count = 'a';
	while (count <= 'z')
	{
		write (1, &count, 1);
		count++;
	}
}
//int main(void)
//{
//	ft_print_alphabet();
//	return 0;
//}
