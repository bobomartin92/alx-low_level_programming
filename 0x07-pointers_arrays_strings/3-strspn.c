#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: the source string
 * @accept: substring
 *
 * Return: number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, cur;

	i = 0;
	while (s[i])
	{
		j = 0;
		cur = i;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				i++;
				break;
			}
			j++;
		}
		if (cur == i)
		{
			break;
		}
	}

	return (i);
}
