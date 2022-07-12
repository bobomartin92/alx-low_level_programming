#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - function that prints every other
 * character of a string, starting with the first
 * character, followed by a new line.
 * @str: string
 */

void puts2(char *str)
{
	int i = 0, len = strlen(str);

	while (i < len)
	{

		_putchar(str[i]);

		i += 2;
	}
	_putchar(10);
}
