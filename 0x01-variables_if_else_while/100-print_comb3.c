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
	int n = 48;
	int m = 49;

	while (n < 57)
	{
		while (m < 58)
		{
			putchar(n);
			putchar(m);
			if (!(n == 56 && m == 57))
			{
				putchar(44);
				putchar(32);
			}

			m++;
		}

		n++;
		m = n + 1;
	}

	putchar(10);

	return (0);

}
