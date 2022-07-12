#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: string
 */

void rev_string(char *s)
{
	int i = strlen(s) - 1, j = 0;
	char tmp;

	while (j < i)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;

		i--;
		j++;
	}
}
