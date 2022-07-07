#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Write a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{
	int i = 48, j = 48, k = 48, n = 1;

	while (n <= 10)
	{
		while (j <= 52)
		{
			if (k > 57)
			{
				i = j;
				_putchar(49);
				j++;
			}
			_putchar(i);
			i++;
			k++;
		}
		_putchar(10);
		n++;
		i = 48;
		j = 48;
		k = 48;
	}
}
