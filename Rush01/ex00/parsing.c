/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:29:09 by adapassa          #+#    #+#             */
/*   Updated: 2023/11/26 16:35:50 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

char	*clone_argv(char *argv)
{
	int	i;
	int	j;
	char	*clone;
	i = 0;
	j = 0;
	clone = malloc(sizeof(char) * 17);
	while (argv[i] != '\0')
	{
		if (argv[i] == 32)
			i++;
		else
		{
			clone[j] = argv[i];
			j++;
			i++;
		}
	}
	clone[j] = '\0';
	return (clone);
}

int	**create_args(char *argv)
{
	int	**args = (int **)malloc(4 * sizeof(int *));
	int	i;
	int	j;
	int	x;
	i = 0;
	j = 0;
	x = 0;
	while (x <= 3)
	{
		args[x] = malloc(sizeof(int) * 4);
		x++;
	}
	x = 0;
	while (argv[i])
	{
		if (j == 4)
		{
			x++;
			j = 0;
		}
		args[x][j] = (argv[i] - 48);
		i++;
		j++;
	}
	return (args);
}
