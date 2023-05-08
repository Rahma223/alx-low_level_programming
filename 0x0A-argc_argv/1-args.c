#include <stdio.h>

/**
 * main - print the number of argements
 * @argc: number of command line arguments
 * @argv: pointer to an array
 * Return: zero success . non zero fail
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
