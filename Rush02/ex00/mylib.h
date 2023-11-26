/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mylib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:52:31 by adapassa          #+#    #+#             */
/*   Updated: 2023/11/25 14:55:28 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYLIB_H
# define MYLIB_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str);
void	ft_putstr(char *str);
char	*clone_argv(char *argv);
int	**create_args(char *argv);
void    fill_matrix(int **matrix);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
int	**init_matrix();
int	**solve_game(int **matrix, int **args);
void    print_matrix(int **matrix);
int	**clue_1(int **matrix, int **args, int i, int j);
int	**clue_4(int **matrix, int **args, int i, int j);
int	**clue_3(int **matrix, int **args, int i, int j);

#endif
