#include <stdio.h>
#include "main.h"

/**
 * print_triangle - function that prints triangle.
 * @size: size of triangle.
 */
void print_triangle(int size)
{
	int i = size, j, k;

	while (size > 0)
	{
		j = 1;
		while (j < size)
		{
			_putchar(' ');
			j++;
		}
		k = i - --j;
		while (k > 0)
		{
			_putchar('#');
			k--;
		}
		_putchar('\n');
		size--;
	}

	if (i <= 0)
	{
		_putchar('\n');
	}
}
