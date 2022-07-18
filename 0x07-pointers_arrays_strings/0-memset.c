#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: The source of array
 * @b: The constant byte
 * @n: The length of byte to fill
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
