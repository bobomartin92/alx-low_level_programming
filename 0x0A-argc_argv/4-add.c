#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program thats prints its name, followed by a new line.
 * @argc: stores number of command-line arguments passed by the
 * user including the name of the program.
 * @argv: is array of character pointers listing all the arguments.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]) || atoi(argv[i]) < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
