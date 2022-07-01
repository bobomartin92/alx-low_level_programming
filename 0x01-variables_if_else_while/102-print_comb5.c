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
	int m = 48;
	int o = 48;
	int p = 49;

	while (n < 58)
	{
		while (m < 58)
		{
			while (o < 58)
			{
				while (p < 58)
				{
					putchar(n);
					putchar(m);
					putchar(32);
					putchar(o);
					putchar(p);
					if (!(n == 57 && m == 56 && o == 57 && p == 57))
					{
						putchar(44);
						putchar(32);
					}
					p++;
				}
				o++;
				p = 48;
			}
			m++;
			o = n;
			p = m + 1;
		}
		n++;
		m = 48;
		o = n;
		p = m + 1;
	}
	putchar(10);
	return (0);

}
