#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: the number of times the character _ should be printed.
 */
void print_diagonal(int n)
{
	int i, k = n;

	if (n <= 0)
	{
		_putchar('\n');
	}

	while (n > 0)
	{
		i = k - n;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		n--;
	}
}
