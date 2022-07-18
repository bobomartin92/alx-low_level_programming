#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: the source string
 * @needle: the substring
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, cur;
	char *ptr;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			cur = j + i;
			while (needle[j])
			{
				if (haystack[cur] != needle[j])
				{
					j = 0;
					break;
				}
				j++;
				cur++;
			}
			if (j)
			{
				ptr = &haystack[i];
				return (ptr);
			}
		}
		i++;
	}
	return (NULL);
}
