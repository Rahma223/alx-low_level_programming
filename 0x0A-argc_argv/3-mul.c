#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the sum of two number
 * @argc: number of commint line arguments
 * @argv: pointer to an array of commint line arguments
 * Return: 0 if success
 */

int main(int argc, char const *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1] * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
