#include "main.h"

/**
 * _isupper - checks if c upper case
 * @c: The number to be checked.
 *
 * Return: 1 if true else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
