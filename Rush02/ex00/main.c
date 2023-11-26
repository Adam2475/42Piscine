/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 11:14:33 by adapassa          #+#    #+#             */
/*   Updated: 2023/11/25 12:00:38 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int	main(int argc, char **argv)
{
	char *clone;
	int **args;
	int **matrix;
	if (argc != 2)
	{
		ft_putstr("Wrong number of arguments!");
		return (0);
	}
	clone = clone_argv(argv[1]);
	args = create_args(clone);
	matrix = init_matrix();
	matrix = solve_game(matrix, args);
	if (matrix[0][0] == 9)
	{
		ft_putstr("No solution found!");
		return (-1);
	}
	print_matrix(matrix);
	return (0);
}
