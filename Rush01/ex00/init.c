#include "mylib.h"

int **init_matrix()
{
    int **matrix;
    int i = 0;
    matrix = (int **)malloc(sizeof(int *) * 4);
    while (i < 4)
    {
        matrix[i] = malloc(sizeof(int) * 4);
        i++;
    }
    fill_matrix(matrix);
    return (matrix);
}

void    print_matrix(int **matrix)
{
    int i = 0;
    int j = 0;
    while (j < 4)
    {
        i = 0;
        while (i < 4)
        {
            ft_putnbr(matrix[j][i]);
            i++;
        }
        ft_putchar('\n');
        j++;
    }
}

void    fill_matrix(int **matrix)
{
    int i = 0;
    int j = 0;
    while (j < 4)
    {
        i = 0;
        while (i < 4)
        {
            matrix[j][i] = 0;
            i++;
        }
        j++;
    }
}
