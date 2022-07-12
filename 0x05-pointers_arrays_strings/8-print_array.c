#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_array - function that prints n
 * elements of an array of integers,
 * followed by a new line.
 * @a: array
 * @n: number of array element to be printed
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
			break;
		}
		printf("%d, ", a[i]);
		i++;
	}
	printf("\n");
}
