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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
