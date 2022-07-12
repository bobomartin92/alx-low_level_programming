#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcpy - function that that copies the string
 * pointed to by src, including the terminating null
 * byte (\0), to the buffer pointed to by dest.
 * @dest: destination string
 * @src: source string
 * Return: char dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = strlen(src);
	int i = 0;

	while (i < l + 1)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
