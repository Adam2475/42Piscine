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
int	**check_args(char *argv);

#endif
