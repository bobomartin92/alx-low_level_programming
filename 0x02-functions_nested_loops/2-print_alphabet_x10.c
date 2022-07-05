#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet in lower case
 */
void print_alphabet_x10(void)
{
	int a = 97;
	int n = 1;

	while (n <= 10)
	{
		while (a < 123)
		{
			_putchar(a);
			a++;
		}
		_putchar(10);
		a = 97;
		n++;
	}
}
