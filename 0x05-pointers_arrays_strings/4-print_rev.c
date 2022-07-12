#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line.
 * @s: string
 */

void print_rev(char *s)
{
	int i = strlen(s) - 1;

	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}

	_putchar(10);
}
