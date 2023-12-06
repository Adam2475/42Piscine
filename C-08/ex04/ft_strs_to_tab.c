/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:14:04 by adapassa          #+#    #+#             */
/*   Updated: 2023/11/24 18:17:49 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct s_stock_str
{
int size;
char *str;
char *copy;
} t_stock_str;

char	*ft_strcpy(const char *src, char *dest)
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_fill_stock(t_stock_str *stock)
{
	stock->size = 0;
	stock->str = NULL;
	stock->copy = NULL;
}

t_stock_str	*construct_stock(t_stock_str *stock, char *arg)
{
	int	size;

	size = ft_strlen(arg);
	stock->copy = (char *)malloc(sizeof(char) * size + 1);
	ft_strcpy(arg, stock->copy);
	stock->size = size;
	stock->str = arg;
	return (stock);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock;
	int			i;
	int			j;

	stock = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac));
	if (!(av))
		return (NULL);
	i = 1;
	j = 0;
	if (!(av == NULL))
	{
		while (j < (ac - 1))
		{
			construct_stock(&stock[j], av[i]);
			i++;
			j++;
		}
		ft_fill_stock(&stock[j]);
	}
	else
	{
		free(stock);
		return (NULL);
	}
	return (stock);
}

int    main(int ac, char **av)
{
    t_stock_str    *stock;
    int i = 0;
    
    stock = ft_strs_to_tab(ac, av);
    while (i < (ac - 1))
    {
        printf("%d\n", stock[i].size);
        printf("%p\n", &stock[i].str);
        printf("%p\n", &stock[i].copy);
        i++;
    }
    free(stock);
    return (0);
}
