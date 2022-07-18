#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: 2d array of chessboard tiles
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar(10);
		i++;
	}
}
