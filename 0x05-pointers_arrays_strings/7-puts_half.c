#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - function that prints half of a string,
 * followed by a new line.
 * @str: string
 */

void puts_half(char *str)
{
	int l = strlen(str);
	int n = l / 2;

	while (n < l)
	{

		_putchar(str[n]);

		n++;
	}
	_putchar(10);
}
