/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:58:06 by adapassa          #+#    #+#             */
/*   Updated: 2023/11/16 12:26:55 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int    tmp;
    int    tmp_last;
    int    i;
    int    j;

    i = 0;
    j = size - 1;
    while (i < (size / 2))
    {
        tmp = tab[i];
        tmp_last = tab[j];
        tab[j] = tmp;
        tab[i] = tmp_last;
        i++;
        j--;
    }
}
//int main()
//{
//    int arr[7] = {1, 2, 3, 4, 7, 9, 10};
//    ft_rev_int_tab(arr, 7);
//    return(0);
//}
