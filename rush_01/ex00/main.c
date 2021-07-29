#include<stdio.h>
#include<functions.h>
#define LAST_SQUARE 16
#define SIZE 4

int	produce_solution(int matrix[SIZE][SIZE], int kernel[16], int status)
{
	int	candidate;
	int verify;

	if (status == LAST_SQUARE) 
	{
		return (0);
	}

	candidate = 1;
	while (candidate < SIZE + 1)
	{
		verify = verify_numbers(status, candidate, matrix[SIZE][SIZE]);
		if (verify == 1)
		{
			matrix[][] = 0;
		}
		else
		{
			if (verify_top_edge(matrix[SIZE][SIZE], kernel[16], status) == 0 &&
			    verify_left_edge(matrix[SIZE][SIZE], kernel[16], status) == 0 &&
				verify_right_edge(matrix[SIZE][SIZE], kernel[16], status) == 0 &&
				verify_top_edge(matrix[SIZE][SIZE], kernel[16],status) == 0 &&)
			{
				status = status + 1;
				verify = produce_solution(matriz[SIZE][SIZE], kernel[16], status);
				if (verify == 0)
					return (0);
			}
		}
		j++;
	}

	return (1);
}

int	*verify_constraints(int argc,char *argv[])
{
	int	counter;
	int kernel [16];

	counter = 1;
	kernel = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	if (argc != 17)
	{
		printf("%s \n", "Error");
		return (1);
	}
	while (counter < argc)
	{
		if (ft_atoi(argv[counter]) <= 0 || ft_atoi(argv[counter]) > 4)
		{
			printf("%s \n", "Error");
			return (1);
		}
		kernel[counter-1] = ft_atoi(argv[counter]);
		counter++;
	}
	return(kernel);
}

int main (int argc, char *argv[])
{
	int output;

	int matrix[SIZE][SIZE] = 
	{
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
	};

	if (verify_constraints(argc) == 1)
		return (1);

	output = produce_solution(matrix, kernel, 0);
	if (output == 1)
		write(1, "There is no solution with this specific kernel.\n", 49);
	else
		print_solution(matrix);

	return (0);
}