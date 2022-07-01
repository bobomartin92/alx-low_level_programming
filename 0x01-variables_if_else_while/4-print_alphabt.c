#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */
/**
 *  * main - Entry point
 *
 *  * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;

	while (n < 123)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}

		putchar(n);
		n++;
	}

	putchar(10);

	return (0);

}
