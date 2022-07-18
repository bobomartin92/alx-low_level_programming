#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: the source string
 * @accept: the search string
 *
 * Return: pointer to the byte in s that matches one of the bytes in
 * accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *ptr;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				ptr = &s[i];
				break;
			}
			j++;
		}
		if (ptr == &s[i])
		{
			return (ptr);
		}
		i++;
	}

	return (NULL);
}
