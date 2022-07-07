#include <stdio.h>
#include "main.h"

/**
 *  * print_numbers - prints number from 0 - 9
 */
void print_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
}
