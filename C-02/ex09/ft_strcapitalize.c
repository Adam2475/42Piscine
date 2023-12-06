/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:35:07 by adapassa          #+#    #+#             */
/*   Updated: 2023/11/19 13:35:10 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32)
		i++;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	while (str[i] != '\0')
	{
		while (str[i] == 32)
			i++;
		if (((str[i - 1] == 32) || (str[i - 1] == '-'
					|| str[i - 1] == '+'))
			&& (str[i] >= 'a' && str[i] <= 'z'))
			str[i++] -= 32;
		else if (((str[i] >= 'A') && (str[i] <= 'Z'))
			&& ((str[i - 1] >= 'A') && (str[i] <= 'Z')))
			str[i] += 32;
		i++;
	}
	return (str);
}
//int main()
//{
//	char arr[] = "salut, comment tu vas ? 42mots
//	quarante-deux; cinquante+et+un";
//	printf("%s\n", ft_strcapitalize(arr));
//	return 0;
//}
