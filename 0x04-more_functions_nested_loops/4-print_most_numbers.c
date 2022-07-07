#include <stdio.h>
#include "main.h"

/**
 *  * print_most_numbers - Write a function that prints the numbers,
 *  from 0 to 9, followed by a new line.
 */
void print_most_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		if (i == 50 || i == 52)
		{
			i++;
			continue;
		}
		_putchar(i);
		i++;
	}
	_putchar(10);
}
