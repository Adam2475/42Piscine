#include "mylib.h"

int	**solve_game(int **matrix, int **args)
{
	int	i;
	int	j;

	j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			matrix = clue_4(matrix, args, i, j);
			matrix = clue_1(matrix, args, i, j);
			matrix = clue_3(matrix, args, i, j);
			//if (check_doubles(matrix, args, i, j))
			//	matrix[0][0] = 9;
			if (matrix[0][0] == 9)
			{
				return matrix;
			}
			i++;
		}
		j++;
	}
	start_solving(matrix);
	return (matrix);
}

int	**clue_4(int **matrix, int **args, int i, int j)
{
	if (args[j][i] == 4)
	{
		// Nord
		if (j == 0)
		{
			matrix[0][i] = 1;
			matrix[1][i] = 2;
			matrix[2][i] = 3;
			matrix[3][i] = 4;
		}
		// South
		else if (j == 1)
		{
			matrix[3][i] = 1;
			matrix[2][i] = 2;
			matrix[1][i] = 3;
			matrix[0][i] = 4;
		}
		// East
		else if (j == 2)
		{
			matrix[i][0] = 1;
			matrix[i][1] = 2;
			matrix[i][2] = 3;
			matrix[i][3] = 4;
		}
		// West
		else if (j == 3)
		{
			matrix[i][3] = 1;
			matrix[i][2] = 2;
			matrix[i][1] = 3;
			matrix[i][0] = 4;
		}
	}
	return (matrix);
}

int	**clue_1(int **matrix, int **args, int i, int j)
{
	if (args[j][i] == 1)
	{
		if ((args[i][j] == 4) && ((i == 3) || (i == 1)))
			matrix[0][0] = 9;
		// Nord
		if (j == 0)
			matrix[j][i] = 4;
		// South
		else if (j == 1)
			matrix[j + 2][i] = 4;
		// East
		else if (j == 2)
			matrix[i][j - 2] = 4; 
		// West
		else if (j == 3)
			matrix[i][j] = 4;
	}
	return (matrix);
}

int	**clue_3(int **matrix, int **args, int i, int j)
{
	if (args[j][i] == 3)
	{
		if (j == 0)
		{
			if (args[j + 1][i] == 2)
			{
				matrix[j + 2][i] = 4;
			}
		}
		else if (j == 2)
		{
			if (args[j + 1][i] == 2)
			{
				matrix[i][j] = 4;
			}
		}
	}
	return (matrix);
}

int	**start_solving(int **matrix, int **args)
{
	int i = 0;
	int j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			if ();
			i++;
		}
		j++;
	}
}

/*int check_doubles(int **matrix)
{
	if (args[j][i] == 4)
	{
		// Nord
		if ((j == 0) && (i == 0))
		{
			if
		}
		// South
		else if (j == 1)
			matrix[j + 2][i] = 1;
		// East
		else if (j == 2)
			matrix[i][j - 2] = 1; 
		// West
		else if (j == 3)
			matrix[i][j] = 1;
	}
}*/
