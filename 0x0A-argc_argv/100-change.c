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
	int change, result = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change < 0)
	{
		printf("0\n");
		return (1);
	}
	while (change > 0)
	{
		if (change >= 25)
		{
			change -= 25;
		}
		else if (change >= 10)
		{
			change -= 10;
		}
		else if (change >= 5)
		{
			change -= 5;
		}
		else if (change >= 2)
		{
			change -= 2;
		}
		else
		{
			change--;
		}
		result++;
	}
	printf("%d\n", result);
	return (0);
}
