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
	int o = 50;

	while (n < 57)
	{
		while (m < 58)
		{
			while (o < 58)
			{
				putchar(n);
				putchar(m);
				putchar(o);

				if (!(n == 55 && m == 56 && o == 57))
				{
					putchar(44);
					putchar(32);
				}
				o++;
			}

			m++;
			o = m + 1;
		}

		n++;
		m = n;
	}

	putchar(10);

	return (0);

}
