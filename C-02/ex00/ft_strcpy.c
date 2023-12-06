/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:07:55 by adapassa          #+#    #+#             */
/*   Updated: 2023/11/18 15:03:00 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
//int main()
//{
//char arr[] =  "ciao\0";
//	char *arr1 = arr;
//	char arr2[] = "mondo\0";
//	//char arr1[5] = "ciao\0";
//	//char arr2[5] = "hello\0";
//	printf("%s", arr1);
//	ft_strcpy(arr1, arr2);
//	//printf("%s", arr2);
//	printf("%s", arr1);
//	return 0;
//}
