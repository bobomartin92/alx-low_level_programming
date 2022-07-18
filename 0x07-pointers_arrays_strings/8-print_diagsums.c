#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: 2d array
 * @size: length of array
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j = 1, l = 0, r = 0;

	while (i < size)
	{
		l += *(a + (i * size + i));
		r += *(a + (j * size - j));
		i++;
		j++;
	}
	printf("%d, %d\n", l, r);
}
