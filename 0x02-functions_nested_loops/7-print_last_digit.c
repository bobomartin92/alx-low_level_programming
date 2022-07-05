#include "main.h"

/**
 * print_last_digit - prints the last digit of n
 * @n: The number to be computed.
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	n %= 10;
	_putchar(n);
	return (n);
}
