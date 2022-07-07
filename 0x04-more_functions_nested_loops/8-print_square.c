#include <stdio.h>
#include "main.h"

/**
 * print_square - function that prints #.
 * @size: the number of times the character # should be printed.
 */
void print_square(int size)
{
	int i = size, k = size;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (size > 0)
	{
		while (i > 0)
		{
			_putchar('#');
			i--;
		}
		_putchar('\n');
		size--;
		i = k;
	}
}
